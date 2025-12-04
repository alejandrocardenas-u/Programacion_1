// Materia: Programación I, Paralelo 4
// Autor: Alejandro Cardenas Huayta
// Carnet: 13343885
// Carrera del estudiante:Ingenieria Biomedica
// Fecha creación: 3/12/2025
// Número de ejercicio: 3

#include <iostream>
#include <fstream>
#include <cstring>
#include <cstdio>
#include <vector>

using namespace std;

struct structPizza
{
    int codigo;
    char nombre[30];
    int tipo;
    int tamaño;
    float precio;
};

struct structClientes
{
    int carnet;
    char nombre[30];
    int codigo_pizza;
    int tamaño;
    int cantidad;
};
vector <string> Tipo {"Tradicional", "Especial"};
vector <string> Tamaño {"XS","Mediana","Grande","Familiar","Interminable"};

void Menu();
void Adicionar_pizzas(string archivo_producto);
void Listado_pizzas(string archivo_producto, string archivo_ventas);
void Modificar_precio_pizza(string archivo_producto);
void Eliminar_pizza(string archivo_producto);
void Adicionar_ventas(string archivo_producto, string archivo_ventas);

int main()
{
    Menu();
    return 0;
}

void Menu()
{
    int opcion;
    string archivo_producto = "Productos.bin";
    string archivo_ventas = "Ventas.txt";
    do
    {
        do
        {
            system("cls");
            cout << "\t-----MENU-----"<<endl;
            cout << "\t1. Adicionar Pizza"<<endl;
            cout << "\t2. Listado de Pizzas "<<endl;
            cout << "\t3. Modificar el precio de la pizza "<<endl;
            cout << "\t4. Eliminar una pizza "<<endl;
            cout << "\t5. Adicionar ventas de pizzas "<<endl;
            cout << "\t0. Salir"<<endl;
            cout << "\tIngrese una opcion: ";
            cin >> opcion;
            cin.ignore();
            if (!(opcion >=0 && opcion <=5))
            {
                cout << "\tOpcion no valida"<<endl;
                system ("pause");
            }
        } while (!(opcion >=0 && opcion <=5));
        switch (opcion)
        {
        case 1: Adicionar_pizzas(archivo_producto);break;
        case 2: Listado_pizzas(archivo_producto, archivo_ventas);break;
        case 3: Modificar_precio_pizza(archivo_producto);break;
        case 4: Eliminar_pizza(archivo_producto);break;
        case 5: Adicionar_ventas(archivo_producto,archivo_ventas);break;
        default:break;
        }
    } while (opcion !=0);
}

void Adicionar_pizzas(string archivo_producto)
{
    structPizza Pizza;
    system ("cls");
    cout << "Ingrese el codigo del Pizza: "<<endl;
    cin >> Pizza.codigo;
    cout << "Ingrese el nombre del Pizza: "<<endl;
    cin.ignore();
    cin.getline(Pizza.nombre,30);
    int precio_x;
    do
    {
        cout << "TIPOS DE PIZZA"<<endl;
        cout << "1. Tradicional"<<endl;
        cout << "2. Especial"<<endl;
        cout << "Ingrese una opcion: "<<endl;
        cin >> Pizza.tipo;
    } while (!(Pizza.tipo >=1 &&Pizza.tipo <=2));
    do
    {
        cout << "TAMAÑOS DE PIZZAS"<<endl;
        cout << "1. XS"<<endl;
        cout << "2. Mediana"<<endl;
        cout << "3. Grande"<<endl;
        cout << "4. Familiar"<<endl;
        cout << "5. Interminable"<<endl;
        cout << "Ingrese una opcion: ";
        cin >> Pizza.tamaño;
    } while (!(Pizza.tamaño >=1 && Pizza.tamaño <=5));
    cout << "Ingrese el precio de la pizza: "<<endl;
    cin >> precio_x;
    if (Pizza.tipo==2)
    {
        Pizza.precio=precio_x*1.1;
    }
    else
    {
        Pizza.precio=precio_x;
    }
    ofstream archivo;
    archivo.open(archivo_producto, ios::binary | ios::app);
    if (archivo.good())
    {
        archivo.write((char*)&Pizza, sizeof(structPizza));
    }
    archivo.close();
}

void Listado_pizzas(string archivo_producto,string archivo_ventas)
{
    ifstream archivo_pizzas;
    archivo_pizzas.open(archivo_producto, ios::binary);
    ifstream archivo;
    archivo.open(archivo_ventas);
    system("cls");
    structPizza Pizza;
    structClientes Cliente;
    int carnet, codigo, cantidad;
    string tamaño_texto;
    int ventas=0;
    cout << "CODIGO\tNOMBRE\tTIPO\tTAMAÑO\tPRECIO\tCANTIDAD\tTOTAL"<<endl;
    while (archivo_pizzas.read((char*)&Pizza, sizeof(structPizza)))
    {
        ventas=0;
        archivo.clear();
        archivo.seekg(0);
        while (archivo >> carnet >> codigo >> tamaño_texto >> cantidad)
        {
            if (codigo==Pizza.codigo)
            {
                ventas+=cantidad;
            }
        }
        cout << Pizza.codigo<<"\t"<<Pizza.nombre<<"\t"<<Tipo[Pizza.tipo-1]<<"\t"<<Tamaño[Pizza.tamaño-1]<<"\t"<<Pizza.precio<<"\t"<<ventas<<"\t"<<ventas*Pizza.precio<<endl;
    }
    system ("pause");
    archivo.close();
    archivo_pizzas.close();
}

void Modificar_precio_pizza(string archivo_producto)
{
    structPizza Producto;
    structPizza temp;
    ifstream archivo_original;
    archivo_original.open(archivo_producto, ios::binary);
    ofstream archivo_temporal;
    archivo_temporal.open("temp.bin", ios::binary);
    int codigo_buscar;
    cout << "Ingrese el codigo del producto que desea modificar: ";
    cin >> codigo_buscar;
    while (archivo_original.read((char*)&Producto, sizeof(structPizza)))
    {
        if (Producto.codigo==codigo_buscar)
        {
            cout << "Producto encontrado. REGISTRO PREVIO:"<<endl;
            cout << "-----------------------------"<<endl;
            cout << "Nombre: "<<Producto.nombre<<endl;
            cout << "Codigo: "<<Producto.codigo<<endl;
            cout << "Tipo: "<<Tipo[Producto.tipo-1]<<endl;
            cout << "Tamaño: "<<Tamaño[Producto.tamaño-1]<<endl;
            cout << "Precio: "<<Producto.precio<<endl;
            cout << "-----------------------------"<<endl;
            cout << "INGRESE LOS DATOS ACTUALIZADOS: "<<endl;
            cout << "Ingrese el precio actualizado: "<<endl;
            cin >> temp.precio;
            temp.codigo = Producto.codigo;
            strcpy(temp.nombre, Producto.nombre);
            temp.tipo=Producto.tipo;
            temp.tamaño=Producto.tamaño;
            archivo_temporal.write((char*)&temp, sizeof(structPizza));
            cout << "SE HA MODIFICADO CORRECTAMENTE EL PRODUCTO"<<endl;
        }
        else
        {
            archivo_temporal.write((char*)&Producto, sizeof(structPizza));
        }
    }
    system("pause");
    archivo_original.close();
    archivo_temporal.close();
    remove(archivo_producto.c_str());
    rename("temp.bin", archivo_producto.c_str());
}

void Eliminar_pizza(string archivo_producto)
{
    structPizza Producto;
    structPizza temp;
    ifstream archivo_original;
    archivo_original.open(archivo_producto, ios::binary);
    ofstream archivo_temporal;
    archivo_temporal.open("temp.bin",ios::binary);
    int codigo_buscar;
    cout << "Ingrese el codigo del producto que desea modificar: ";
    cin >> codigo_buscar;
    while (archivo_original.read((char*)&Producto, sizeof(structPizza)))
    {
        if (Producto.codigo==codigo_buscar)
        {
            cout << "Producto encontrado. REGISTRO PREVIO:"<<endl;
            cout << "-----------------------------"<<endl;
            cout << "Nombre: "<<Producto.nombre<<endl;
            cout << "Codigo: "<<Producto.codigo<<endl;
            cout << "Tipo: "<<Tipo[Producto.tipo-1]<<endl;
            cout << "Tamaño: "<<Tamaño[Producto.tamaño-1]<<endl;
            cout << "Precio: "<<Producto.precio<<endl;
            cout << "-----------------------------"<<endl;
            cout << "SE HA ELIMINADO CORRECTAMENTE EL PRODUCTO"<<endl;
        }
        else
        {
            archivo_temporal.write((char*)&Producto, sizeof(structPizza));
        }
    }
    system("pause");
    archivo_original.close();
    archivo_temporal.close();
    remove(archivo_producto.c_str());
    rename("temp.bin", archivo_producto.c_str());
}

void Adicionar_ventas(string archivo_producto,string archivo_ventas)
{
    ofstream archivo;
    archivo.open(archivo_ventas, ios::app);
    structClientes Cliente;
    cout << "Ingrese el carnet del cliente: ";
    cin >> Cliente.carnet;
    cout << "Ingrese el nombre del cliente: ";
    cin.ignore();
    cin.getline(Cliente.nombre,30);
    cout << "Ingrese el codigo de pizza: ";
    cin >> Cliente.codigo_pizza;
    do
    {
        cout << "TAMAÑOS DE PIZZAS"<<endl;
        cout << "1. XS"<<endl;
        cout << "2. Mediana"<<endl;
        cout << "3. Grande"<<endl;
        cout << "4. Familiar"<<endl;
        cout << "5. Interminable"<<endl;
        cout << "Ingrese una opcion: ";
        cin >> Cliente.tamaño;
    } while (Cliente.tamaño >=1 && Cliente.tamaño <=5);
    cout << "Ingrese la cantidad de pizzas vendidas: ";
    cin >> Cliente.cantidad;
    archivo << Cliente.carnet<<" "<<Cliente.codigo_pizza<<"  "<<Tamaño[Cliente.tamaño-1]<<" "<<Cliente.cantidad<<endl;
    cout << Cliente.carnet<<" "<<Cliente.codigo_pizza<<"  "<<Tamaño[Cliente.tamaño-1]<<" "<<Cliente.cantidad<<endl;
    archivo.close();
    system("pause");
}