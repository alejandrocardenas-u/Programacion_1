// Materia: Programación I, Paralelo 4
// Autor: Alejandro Cardenas Huayta
// Carnet: 13343885
// Carrera del estudiante:Ingenieria Biomedica
// Fecha creación: 3/12/2025
// Número de ejercicio: 9

#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;


void Menu();
void Cifrado(string Nombre_archivo);
void Ingresar_datos(string Nombre_archivo);

int main()
{
    Menu();
    return 0;
}

void Menu()
{
    int opcion;
    string Nombre_archivo = "mensaje.txt";
    do
    {
        do
        {
            system("cls");
            cout << "\t-----MENU-----"<<endl;
            cout << "\t1. Ingresar Datos"<<endl;
            cout << "\t2. Cifrar datos"<<endl;
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
        case 2: Cifrado(Nombre_archivo);break;
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

void Cifrado(string Nombre_archivo)
{
    ifstream archivo;
    ofstream cifrado;
    string linea, nueva_linea;
    archivo.open(Nombre_archivo);
    cifrado.open("mensaje_cifrado.txt");
    if (archivo.good())
    {
        while (getline(archivo,linea))
        {
            nueva_linea="";
            for (int i = 0; i < linea.size(); i++)
            {
                if (linea[i]==' ')
                {
                    nueva_linea+=' ';
                }
                else
                    nueva_linea += char(int(linea[i])+3);
            }
            cifrado << nueva_linea<<endl;
        }
        
    }
    archivo.close();
    cifrado.close();
}