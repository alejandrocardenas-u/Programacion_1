// Materia: Programación I, Paralelo 4
// Autor: Alejandro Cardenas Huayta
// Carnet: 13343885
// Carrera del estudiante:Ingenieria Biomedica
// Fecha creación: 3/12/2025
// Número de ejercicio: 8

#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;


void Menu();
void Contar_datos(string Nombre_archivo);
void Ingresar_datos(string Nombre_archivo);

int main()
{
    Menu();
    return 0;
}

void Menu()
{
    int opcion;
    string Nombre_archivo = "documento.txt";
    do
    {
        do
        {
            system("cls");
            cout << "\t-----MENU-----"<<endl;
            cout << "\t1. Ingresar Datos"<<endl;
            cout << "\t2. Contar datos"<<endl;
            cout << "\t0. Salir"<<endl;
            cout << "\tIngrese una opcion: ";
            cin >> opcion;
            cin.ignore();
            if (!(opcion >=0 && opcion <=2))
            {
                cout << "\tOpcion no valida"<<endl;
                system ("pause");
            }
        } while (!(opcion >=0 && opcion <=2));
        switch (opcion)
        {
        case 1: Ingresar_datos(Nombre_archivo);break;
        case 2: Contar_datos(Nombre_archivo);break;
        default:break;
        }
    } while (opcion !=0);
}

void Ingresar_datos(string Nombre_archivo)
{
    system ("cls");
    ofstream archivo;
    archivo.open(Nombre_archivo, ios::app);
    string Linea;
    if (archivo.good())
    {
        cout << "Ingrese una linea de texto: ";
        getline(cin, Linea);
        archivo << Linea<<endl;
        cout << "REGISTRO COMPLETADO"<<endl;
    }
    else
        cout << "Imposible abrir el archivo"<<endl;
    system ("pause");
}

void Contar_datos(string Nombre_archivo)
{
    ifstream archivo;
    archivo.open(Nombre_archivo);
    string Linea;
    string palabra;
    int contador_lineas=0, contador_palabras=0, contador_caracteres=0;
    while (getline(archivo,Linea))
    {
        contador_lineas++;
        contador_caracteres+=Linea.size();
        for (int i = 0; i < Linea.size(); i++)
        {
            if (Linea[i] == ' ')
            {
                contador_palabras++;
            }
            
        }
        
    }
    cout << "Total lineas: "<<contador_lineas<<endl;
    cout << "Total palabras: "<<contador_palabras<<endl;
    cout << "Total caracteres: "<<contador_caracteres<<endl;
}