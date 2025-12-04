// Materia: Programación I, Paralelo 4
// Autor: Alejandro Cardenas Huayta
// Carnet: 13343885
// Carrera del estudiante:Ingenieria Biomedica
// Fecha creación: 3/12/2025
// Número de ejercicio: 3

#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

struct Estudiantes
{
    char Nombre [30];
    int Edad;
    float promedio;
};

void Menu();
void Ingresar_datos(string Nombre_archivo);
void Leer_datos(string Nombre_archivo);

int main()
{
    Menu();
    return 0;
}

void Menu()
{
    int opcion;
    string Nombre_archivo = "estudiantes.txt";
    do
    {
        do
        {
            system("cls");
            cout << "\t-----MENU-----"<<endl;
            cout << "\t1. Ingresar Datos"<<endl;
            cout << "\t2. Leer Datos"<<endl;
            cout << "\t0. Salir"<<endl;
            cout << "\tIngrese una opcion: ";
            cin >> opcion;
            if (!(opcion >=0 && opcion <=3))
            {
                cout << "\tOpcion no valida"<<endl;
                system ("pause");
            }
        } while (!(opcion >=0 && opcion <=3));
        switch (opcion)
        {
        case 1: Ingresar_datos(Nombre_archivo);break;
        case 2: Leer_datos(Nombre_archivo);break;
        default:break;
        }
    } while (opcion !=0);
}

void Ingresar_datos(string Nombre_archivo)
{
    // REGISTRAR ESTUDIANTE
    system ("cls");
    Estudiantes estudiante;
    cin.ignore();
    cout << "Ingrese el nombre del estudiante: ";
    cin.getline(estudiante.Nombre,30);
    cout << "Ingrese la edad del estudiante: ";
    cin >> estudiante.Edad;
    cout << "Ingrese el promedio del estudiante: ";
    cin >> estudiante.promedio;
    //GUARDAR ESTUDIANTE EN ARCHIVO
    ofstream archivo;
    archivo.open(Nombre_archivo);
    if (archivo.good())
    {
        archivo << "--------------------------------"<<endl;
        archivo << "Nombre: "<<estudiante.Nombre<<endl;
        archivo << "Edad: "<<estudiante.Edad<<endl;
        archivo << "Promedio: "<<estudiante.promedio<<endl;
        archivo << "--------------------------------"<<endl;
        cout << "\tSe ha completado el registro"<<endl;
    }
    else
    {
        cout << "Imposible abrir el archivo"<<endl;
    }
    system("pause");
    archivo.close();
}

void Leer_datos(string Nombre_archivo)
{
    string linea_texto;
    ifstream archivo;
    archivo.open(Nombre_archivo);
    if (archivo.good())
    {
        while (getline(archivo, linea_texto))
        {
            cout << linea_texto << endl;
        }
        
    }
    else
    {
        cout << "Imposible abrir el archivo"<<endl;
    }
    system("pause");
}