// Materia: Programación I, Paralelo 4
// Autor: Alejandro Cardenas Huayta
// Carnet: 13343885
// Carrera del estudiante:Ingenieria Biomedica
// Fecha creación: 3/12/2025
// Número de ejercicio: 1

#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

struct structEstudiantes
{
    char ci[10];
    char nombres[30];
    char apellidos[30];
};

struct structNotas
{
    char ci[10];
    char materia[30];
    int nota;
};

void Menu();
void Imprimir_reporte(string Estudiantes,string Notas);
void Ingresar_notas(string Notas);
void Ingresar_datos_estudiantes(string Estudiantes);

int main()
{
    Menu();
    return 0;
}

void Menu()
{
    int opcion;
    string Estudiantes = "Estudiantes.bin";
    string Notas = "Notas.bin";
    do
    {
        do
        {
            system("cls");
            cout << "\t-----MENU-----"<<endl;
            cout << "\t1. Ingresar datos estudiantes"<<endl;
            cout << "\t2. Ingresar notas "<<endl;
            cout << "\t3. Imprimir Reporte "<<endl;
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
        case 1: Ingresar_datos_estudiantes(Estudiantes);break;
        case 2: Ingresar_notas(Notas);break;
        case 3: Imprimir_reporte(Estudiantes,Notas);break;
        default:break;
        }
    } while (opcion !=0);
}

void Ingresar_datos_estudiantes(string Estudiantes)
{
    structEstudiantes Estudiante;
    system ("cls");
    ofstream archivo;
    archivo.open(Estudiantes, ios::binary|ios::app);
    if (archivo.good())
    {
        cout << "\tREGISTRO DE ESTUDIANTES"<<endl;
        cout <<"----------------------------------"<<endl;
        cout << "Ingrese el carnet identidad del estudiante: "<<endl;
        cin >> Estudiante.ci;
        cin.ignore();
        cout << "Ingrese el nombre del estudiante: "<<endl;
        cin.getline(Estudiante.nombres, 30);
        cout << "Ingrese los apellidos del estudiante: "<<endl;
        cin.getline(Estudiante.apellidos, 30);
        archivo.write((char*)&Estudiante, sizeof (structEstudiantes));
        system ("cls");
        cout << "\tSE HA COMPLETADO EL REGISTRO CORRECTAMENTE"<<endl;
        system ("pause");
    }
    archivo.close();
}

void Ingresar_notas(string Notas)
{
    structNotas Nota;
    system ("cls");
    ofstream archivo;
    archivo.open(Notas, ios::binary|ios::app);
    if (archivo.good())
    {
        cout << "\tREGISTRO DE NOTAS"<<endl;
        cout << "-------------------------------"<<endl;
        cout << "Ingrese el carnet del estudiante: "<<endl;
        cin.ignore();
        cin.getline(Nota.ci,10);
        cout << "Ingrese el nombre de la materia: "<<endl;
        cin.getline(Nota.materia,30);
        cout << "Ingrese la nota del estudiante: "<<endl;
        cin >> Nota.nota;
        archivo.write((char*)&Nota, sizeof (structNotas));
        system ("cls");
        cout << "\tSE HA COMPLETADO EL REGISTRO CORRECTAMENTE"<<endl;
        system ("pause");
    }
    archivo.close();
}

void Imprimir_reporte(string Estudiantes,string Notas)
{
    system ("cls");
    structEstudiantes Estudiante;
    structNotas Nota;
    ifstream archivo_estudiantes;
    ifstream archivo_notas;
    archivo_estudiantes.open(Estudiantes, ios::binary);
    archivo_notas.open(Notas, ios::binary);
    cout << "\tREGISTRO DE NOTAS"<<endl;
    cout << "==========================="<<endl;
    if (archivo_estudiantes.good() && archivo_notas.good())
    {
        while (archivo_estudiantes.read((char*)&Estudiante, sizeof (structEstudiantes)))
        {
            cout << "------------------------------"<<endl;
            cout << "Nombre: "<< Estudiante.nombres<<endl;
            cout << "Apellido: "<<Estudiante.apellidos<<endl;
            cout << "CI: "<<Estudiante.ci<<endl;
            archivo_notas.clear();
            archivo_notas.seekg(0);
            while(archivo_notas.read((char*)&Nota, sizeof (structNotas)))
            {
                if (strcmp(Estudiante.ci, Nota.ci)==0)
                {
                    cout << "Materia: "<<Nota.materia<<endl;
                    cout << "Nota: "<<Nota.nota<<endl;
                }
            }
            cout << "------------------------------"<<endl;
        }
    }
    system ("pause");
    archivo_estudiantes.close();
    archivo_notas.close();
}