// Materia: Programación I, Paralelo 4
// Autor: Alejandro Cardenas Huayta
// Carnet: 13343885
// Carrera del estudiante:Ingenieria Biomedica
// Fecha creación: 3/12/2025
// Número de ejercicio: 2

#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

void Ingresar_datos(string nombre_archivo);
void contar_palabras(string nombre_Archivo);

int main()
{
    string nombre_Archivo="texto.txt";
    Ingresar_datos(nombre_Archivo);
    contar_palabras(nombre_Archivo);
    return 0;
}

void Ingresar_datos(string nombre_archivo)
{
    char texto[50];
    ofstream archivo;
    archivo.open(nombre_archivo);
    if (archivo.good())
    {
        cout << "Ingrese el texto: ";
        cin.ignore();
        cin.getline(texto,50);
        archivo <<texto;
    }
    archivo.close();
    cout << "El texto se ha guardado correctamente"<<endl;
    system("pause");
}

void contar_palabras(string nombre_Archivo)
{
    ifstream archivo;
    string palabra="", Linea_texto="";
    int contador=0;
    archivo.open(nombre_Archivo);
    if (archivo.good())
    {
        while (!archivo.eof())
        {
            getline(archivo, Linea_texto);
            if (Linea_texto=="palabra")
            {
                contador++;
            }
        }
        cout << "La cantidad de veces que se repite <<palabra>> en el texto es: "<<contador<<endl;
    }
    else
    {
        cout << "Imposible abrir el archivo"<<endl;
    }
}