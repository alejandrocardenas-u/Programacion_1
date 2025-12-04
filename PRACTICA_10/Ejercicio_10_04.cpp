// Materia: Programación I, Paralelo 4
// Autor: Alejandro Cardenas Huayta
// Carnet: 13343885
// Carrera del estudiante:Ingenieria Biomedica
// Fecha creación: 3/12/2025
// Número de ejercicio: 4

#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

void Menu();
void Ingresar_datos(string Nombre_archivo);
void Buscar_datos(string Nombre_archivo);

int main()
{
    Menu();
    return 0;
}

void Menu()
{
    int opcion;
    string Nombre_archivo = "datos.txt";
    do
    {
        do
        {
            system("cls");
            cout << "\t-----MENU-----"<<endl;
            cout << "\t1. Ingresar Datos"<<endl;
            cout << "\t2. Buscar Datos"<<endl;
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
        case 2: Buscar_datos(Nombre_archivo);break;
        default:break;
        }
    } while (opcion !=0);
}

void Ingresar_datos(string Nombre_archivo)
{
    // REGISTRAR ESTUDIANTE
    char datos [30];
    system ("cls");
    cin.ignore();
    cout << "Ingrese el nombre del estudiante: ";
    cin.getline(datos,30);
    //GUARDAR ESTUDIANTE EN ARCHIVO
    ofstream archivo;
    archivo.open(Nombre_archivo);
    if (archivo.good())
    {
        archivo <<datos<<endl;
        cout << "\tSe ha completado el registro"<<endl;
    }
    else
    {
        cout << "Imposible abrir el archivo"<<endl;
    }
    system("pause");
    archivo.close();
}

void Buscar_datos(string Nombre_archivo)
{
    string buscar;
    string linea;
    int contador=0;
    cout << "Ingrese la palabra o frase a buscar: ";
    getline(cin,buscar);
    ifstream archivo;
    archivo.open(Nombre_archivo);
    if (archivo.good())
    {
        while (getline(archivo,linea))
        {
            if (linea.find(buscar) != -1)
            {
                contador++;
            }
            
        }
        cout << "cantidad de palabras encontradas: "<<contador<<endl;
    }
    else
    {
        cout << "Imposible abrir el archivo"<<endl;
    }
    archivo.close();
    system ("pause");
}
