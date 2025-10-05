// Materia: Programación I, Paralelo 4
// Autor: Alejandro Cardenas Huayta
// Carnet: 13343885
// Carrera del estudiante: Ingeniería Biomedica
// Fecha creación: 04/10/2025
// Número de ejercicio: 13

#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<string> separar_espacios(string cadena);
string transformar(string palabra);
int main()
{
    string cadena,palabra;
    vector<string>palabras_separadas;
    vector<string>nueva_cadena;
    cout << "Ingrese una cadena: ";
    getline(cin,cadena);
    palabras_separadas=separar_espacios(cadena);
    for (int i = 0; i < palabras_separadas.size(); i++)
    {
        palabra=palabras_separadas[i];
        nueva_cadena.push_back(transformar(palabra));
    }
    for (int i = 0; i < nueva_cadena.size(); i++)
    {
        cout << nueva_cadena[i]<<" ";
    }
    
    return 0;
}

vector<string> separar_espacios(string cadena){
    vector<string>palabras_separadas;
    string palabra="";
    for (int i = 0; i < cadena.size(); i++)
    {
        if (cadena[i]!=' ')
        {
            palabra.push_back(cadena[i]);
        }
        else if (not(palabra.empty()))
        {
            palabras_separadas.push_back(palabra);
            palabra="";
        }
    }
    if (not(palabra.empty()))
    {
        palabras_separadas.push_back(palabra);
    }
    return palabras_separadas;
}

string transformar(string palabra){
    string nueva_palabra;
    if (int (palabra[0])>=97 && int (palabra[0])<=122)
    {
        nueva_palabra.push_back(char(int(palabra[0])-32));
    }
    for (int i = 1; i < palabra.size(); i++)
    {
        nueva_palabra.push_back(palabra[i]);
    }
    return nueva_palabra;
}