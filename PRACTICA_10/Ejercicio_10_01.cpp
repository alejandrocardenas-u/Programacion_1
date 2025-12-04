// Materia: Programación I, Paralelo 4
// Autor: Alejandro Cardenas Huayta
// Carnet: 13343885
// Carrera del estudiante:Ingenieria Biomedica
// Fecha creación: 18/11/2025
// Número de ejercicio: 1

#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

void Menu();
void Mostrar_datos(string nombre_archivo);
void Ingresar_datos(string nombre_archivo);

int main()
{
    Menu();
    return 0;
}

void Menu()
{
    int opcion=0;
    string nombre_archivo = "Nombres.txt";
    do
    {
        system ("cls");
        do
        {
            cout << "\t========MENU========"<<endl;
            cout << "\t1. Ingresar Datos\n";
            cout << "\t2. Mostrar Datos\n";
            cout << "\t0. Salir\n";
            cout << "Ingrese una opcion: ";
            cin >> opcion;
            if (!(opcion >=0 && opcion <=2))
            {
                cout << "Intente nuevamente, opcion invalida"<<endl;
                system ("pause");
            }
            } while (!(opcion >=0 && opcion <=2));
        switch (opcion)
        {
        case 1: Ingresar_datos(nombre_archivo);break;
        case 2: Mostrar_datos(nombre_archivo);break;
        default:break;
        }
    } while (!opcion==0);
    
}

void Ingresar_datos(string nombre_archivo)
{
    char nombre[50];
    ofstream archivo;
    archivo.open(nombre_archivo);
    if (archivo.good())
    {
        cout << "Ingrese un nombre: ";
        cin.ignore();
        cin.getline(nombre,50);
        archivo <<nombre;
    }
    archivo.close();
    cout << "El nombre se ha guardado correctamente"<<endl;
    system("pause");
}

void Mostrar_datos(string nombre_archivo)
{
    ifstream archivo;
    archivo.open(nombre_archivo);
    string Linea_texto;
    if (archivo.good())
    {
        while (!archivo.eof())
        {
            getline(archivo,Linea_texto);
            cout << Linea_texto<<endl;
        }
        
    }
    else
    {
        cout << "Imposible abrir el archivo\n";
    }
    archivo.close();
    system("pause");
}