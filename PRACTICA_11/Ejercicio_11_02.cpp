// Materia: Programación I, Paralelo 4
// Autor: Alejandro Cardenas Huayta
// Carnet: 13343885
// Carrera del estudiante:Ingenieria Biomedica
// Fecha creación: 3/12/2025
// Número de ejercicio: 2

#include <iostream>
#include <fstream>
#include <cstring>
#include <cstdio>

using namespace std;

struct structProductos
{
    int Codigo;
    char nombre[30];
    int cantidad;
    float precio;
};

struct structClientes
{
    int CI;
    char nombre[30];
    int codigo;
    int cantidad;
};

void Menu();
void Adicionar_productos(string archivo_producto);
void Listado_productos(string archivo_producto, string archivo_ventas);
void Buscar_producto(string archivo_producto);
void Modificar_producto(string archivo_producto);
void Adicionar_ventas(string archivo_producto,string archivo_ventas);

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
            cout << "\t1. Adicionar Productos"<<endl;
            cout << "\t2. Listado de Productos "<<endl;
            cout << "\t3. Buscar un producto por codigo "<<endl;
            cout << "\t4. Modificar un producto "<<endl;
            cout << "\t5. Adicionar ventas de un producto "<<endl;
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
        case 1: Adicionar_productos(archivo_producto);break;
        case 2: Listado_productos(archivo_producto, archivo_ventas);break;
        case 3: Buscar_producto(archivo_producto);break;
        case 4: Modificar_producto(archivo_producto);break;
        case 5: Adicionar_ventas(archivo_producto,archivo_ventas);break;
        default:break;
        }
    } while (opcion !=0);
}

void Adicionar_productos(string archivo_producto)
{
    structProductos Producto;
    system ("cls");
    cout << "Ingrese el codigo del producto: "<<endl;
    cin >> Producto.Codigo;
    cout << "Ingrese el nombre del producto: "<<endl;
    cin.ignore();
    cin.getline(Producto.nombre,30);
    cout << "Ingrese la cantidad del producto: "<<endl;
    cin >> Producto.cantidad;
    cout << "Ingrese el precio del producto: "<<endl;
    cin >> Producto.precio;
    ofstream archivo;
    archivo.open(archivo_producto, ios::binary | ios::app);
    if (archivo.good())
    {
        archivo.write((char*)&Producto, sizeof(structProductos));
    }
    archivo.close();
}

void Listado_productos(string archivo_producto, string archivo_ventas)
{
    structProductos Producto;
    system("cls");
    structClientes Ventas;
    int ventas=0;
    ifstream archivo;
    archivo.open(archivo_producto,ios::binary);
    ifstream arch_ventas;
    arch_ventas.open(archivo_ventas);
    cout << "\tCODIGO\tNOMBRE PRODUCTO\tCANTIDAD INICIAL\tPRECIO\tCANTIDAD VENDIDA\tTOTAL"<<endl;
    while (archivo.read((char*)&Producto, sizeof(structProductos)))
    {
        ventas=0;
        arch_ventas.clear();
        arch_ventas.seekg(0);
        while (arch_ventas.read((char*)&Ventas, sizeof(structClientes)))
        {
            if (Producto.Codigo==Ventas.codigo)
            {
                ventas+=Ventas.cantidad;
            }
        }
        cout << Producto.Codigo<<"\t"<<Producto.nombre<<"\t"<<Producto.cantidad<<"\t"<<Producto.precio<<"\t"<<ventas<<"\t"<<ventas*Producto.precio<<endl;
    }
    archivo.close();
    arch_ventas.close();
    system("pause");
}

void Buscar_producto(string archivo_producto)
{
    structProductos Producto;
    system("cls");
    int codigo_buscar;
    ifstream archivo;
    archivo.open(archivo_producto);
    cout << "Ingrese el codigo del producto a buscar: ";
    cin >> codigo_buscar;
    while (archivo.read((char*)&Producto, sizeof(structProductos)))
    {
        if (Producto.Codigo==codigo_buscar)
        {
            cout << "PRODUCTO ENCONTRADO"<<endl;
            cout << "-----------------------------"<<endl;
            cout << "Nombre: "<<Producto.nombre<<endl;
            cout << "Codigo: "<<Producto.Codigo<<endl;
            cout << "Cantidad inicial: "<<Producto.cantidad<<endl;
            cout << "Precio: "<<Producto.precio<<endl;
            cout << "-----------------------------"<<endl;
        }
    }
    archivo.close();
    system ("pause");
}

void Modificar_producto(string archivo_producto)
{
    structProductos Producto;
    structProductos temp;
    ifstream archivo_original;
    archivo_original.open(archivo_producto);
    ofstream archivo_temporal;
    archivo_temporal.open("temp.bin");
    int codigo_buscar;
    cout << "Ingrese el codigo del producto que desea modificar: ";
    cin >> codigo_buscar;
    while (archivo_original.read((char*)&Producto, sizeof(structProductos)))
    {
        if (Producto.Codigo==codigo_buscar)
        {
            cout << "Producto encontrado. REGISTRO PREVIO:"<<endl;
            cout << "-----------------------------"<<endl;
            cout << "Nombre: "<<Producto.nombre<<endl;
            cout << "Codigo: "<<Producto.Codigo<<endl;
            cout << "Cantidad inicial: "<<Producto.cantidad<<endl;
            cout << "Precio: "<<Producto.precio<<endl;
            cout << "-----------------------------"<<endl;
            cout << "INGRESE LOS DATOS ACTUALIZADOS: "<<endl;
            cout << "Ingrese el nombre: ";
            cin.ignore();
            cin.getline(temp.nombre,30);
            cout << "Ingrese el codigo: ";
            cin >> temp.Codigo;
            cout << "Ingrese la cantidad inicial del producto: ";
            cin >> temp.cantidad;
            cout << "Ingrese el precio: ";
            cin >> temp.precio;
            archivo_temporal.write((char*)&temp, sizeof(structProductos));
            cout << "SE HA MODIFICADO CORRECTAMENTE EL PRODUCTO"<<endl;
        }
        else
        {
            archivo_temporal.write((char*)&Producto, sizeof(structProductos));
        }
    }
    archivo_original.close();
    archivo_temporal.close();
    remove(archivo_producto.c_str());
    rename("temp.bin", archivo_producto.c_str());
}

void Adicionar_ventas(string archivo_producto,string archivo_ventas)
{
    system("cls");
    structClientes Cliente;
    structProductos Producto;
    ifstream arch_codigo;
    arch_codigo.open(archivo_producto);
    ofstream archivo;
    archivo.open(archivo_ventas);
    cout << "Ingrese el carnet identidad del cliente: ";
    cin >> Cliente.CI;
    cout << "Ingrese el nombre del cliente: ";
    cin.ignore();
    cin.getline(Cliente.nombre,30);
    cout << "Ingrese el codigo del producto: "<<endl;
    cin >> Cliente.codigo;
    cout << "Ingrese la cantidad del producto: "<<endl;
    cin >> Cliente.cantidad;
    archivo.write((char*)&Cliente, sizeof(structClientes));
    archivo.close();
    arch_codigo.close();
}