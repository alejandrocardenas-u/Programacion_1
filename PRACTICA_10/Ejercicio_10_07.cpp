// Materia: Programación I, Paralelo 4
// Autor: Alejandro Cardenas Huayta
// Carnet: 13343885
// Carrera del estudiante:Ingenieria Biomedica
// Fecha creación: 3/12/2025
// Número de ejercicio: 7

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void Menu();
void Leer_datos(string Nombre_archivo);
void Ingresar_datos(string Nombre_archivo);

int main()
{
    Menu();
    return 0;
}

void Menu()
{
    int opcion;
    string Nombre_archivo = "calificaciones.txt";
    do
    {
        do
        {
            system("cls");
            cout << "\t-----MENU-----"<<endl;
            cout << "\t1. Ingresar Datos"<<endl;
            cout << "\t2. Leer datos"<<endl;
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
        case 2: Leer_datos(Nombre_archivo);break;
        default:break;
        }
    } while (opcion !=0);
}

void Ingresar_datos(string Nombre_archivo)
{
    system ("cls");
    ofstream archivo;
    archivo.open(Nombre_archivo, ios::app);
    string Temperatura;
    if (archivo.good())
    {
        cout << "Ingrese la el nombre y las 4 calificaciones del estudiante, por ejemplo: Alejandro 50 40.9 20.8 99.8: ";
        getline(cin, Temperatura);
        archivo << Temperatura<<endl;
        cout << "REGISTRO COMPLETADO"<<endl;
    }
    else
        cout << "Imposible abrir el archivo"<<endl;
    system ("pause");
}

void Leer_datos(string Nombre_archivo)
{
    ifstream archivo;
    ofstream nuevo_archivo;
    string nombre;
    float n1,n2,n3,n4;
    archivo.open(Nombre_archivo);
    nuevo_archivo.open("promedios.txt", ios::app);
    if (archivo.good())
    {
        cout << "\tPROMEDIOS"<<endl;
        cout << "-------------------------------"<<endl;
        while (archivo >> nombre >> n1 >> n2 >> n3 >> n4)
        {
            cout << nombre << " "<< (n1+n2+n3+n4)/4<<endl;
            nuevo_archivo << nombre << " "<< (n1+n2+n3+n4)/4<<endl;
        }
    } 
    archivo.close();
    nuevo_archivo.close();
    system ("pause");
}