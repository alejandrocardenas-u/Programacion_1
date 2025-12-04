// Materia: Programación I, Paralelo 4
// Autor: Alejandro Cardenas Huayta
// Carnet: 13343885
// Carrera del estudiante:Ingenieria Biomedica
// Fecha creación: 3/12/2025
// Número de ejercicio: 5

#include <iostream>
#include <fstream>
#include <string>
#include <cstdio>

using namespace std;

void Menu();
void Ingresar_datos(string Nombre_archivo);
void Actualizar_datos(string Nombre_archivo);
void Actualizar(string Nombre_archivo, string palabra);

int main()
{
    Menu();
    return 0;
}


void Menu()
{
    int opcion;
    string Nombre_archivo = "productos.txt";
    do
    {
        do
        {
            system("cls");
            cout << "\t-----MENU-----"<<endl;
            cout << "\t1. Ingresar Datos"<<endl;
            cout << "\t2. Actualizar datos"<<endl;
            cout << "\t0. Salir"<<endl;
            cout << "\tIngrese una opcion: ";
            cin >> opcion;
            cin.ignore();
            if (!(opcion >=0 && opcion <=3))
            {
                cout << "\tOpcion no valida"<<endl;
                system ("pause");
            }
        } while (!(opcion >=0 && opcion <=3));
        switch (opcion)
        {
        case 1: Ingresar_datos(Nombre_archivo);break;
        case 2: Actualizar_datos(Nombre_archivo);break;
        default:break;
        }
    } while (opcion !=0);
}

void Ingresar_datos(string Nombre_archivo)
{
    ofstream archivo;
    archivo.open(Nombre_archivo, ios::app);
    string Producto_precio;
    if (archivo.good())
    {
        cout << "Ingrese el producto y precio a registrar, por ejemplo: Manzana 1.50: ";
        getline(cin, Producto_precio);
        archivo << Producto_precio<<endl;
        cout << "REGISTRO COMPLETADO"<<endl;
    }
    else
        cout << "Imposible abrir el archivo"<<endl;
    system ("pause");
}

void Actualizar_datos(string Nombre_archivo)
{
    system ("cls");
    string palabra_buscar;
    string linea;
    int posicion=0;
    ifstream archivo;
    bool encontrado=false;
    cout << "Ingrese el producto a buscar: "<<endl;
    getline(cin, palabra_buscar);
    archivo.open(Nombre_archivo);
    if (archivo.good())
    {
        while (getline(archivo,linea))
        {
            if (linea.find(palabra_buscar) == 0)
            {
                cout << "Producto encontrado"<<endl;
                Actualizar(Nombre_archivo, linea);
                encontrado=true;
            }
            
        }
        
    }
    if (!encontrado)
    {
        cout << "Producto no encontrado"<<endl;
    }
    
}

void Actualizar(string Nombre_archivo, string palabra)
{
    system ("cls");
    ifstream archivo;
    ofstream archivo_temp;
    archivo.open(Nombre_archivo);
    archivo_temp.open("temp.txt");
    string nuevo_producto;
    string linea;
    cout << "Coincidencia encontrada"<<endl;
    cout << palabra<<endl;
    cout << "Ingrese la nueva informacion del producto "<<endl;
    getline(cin,nuevo_producto);
    while (getline(archivo,linea))
    {
        if (linea==palabra)
        {
            archivo_temp << nuevo_producto<<endl;
        }
        else
        {
            archivo_temp<<linea<<endl;;
        }
    }
    archivo.close();
    archivo_temp.close();
    remove("productos.txt");
    rename("temp.txt","productos.txt");
    cout << "Actualizacion completa"<<endl;
    system ("pause");
}