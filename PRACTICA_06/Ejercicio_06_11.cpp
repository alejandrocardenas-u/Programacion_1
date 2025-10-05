// Materia: Programación I, Paralelo 4
// Autor: Alejandro Cardenas Huayta
// Carnet: 13343885
// Carrera del estudiante: Ingeniería Biomedica
// Fecha creación: 04/10/2025
// Número de ejercicio: 11

#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<string> separar_comas(string cadena);
int main()
{
    vector <string> nueva_cadena;
    string cadena;
    cout << "Ingrese una cadena: ";
    getline(cin,cadena);
    nueva_cadena=separar_comas(cadena);
    for (int i = 0; i < nueva_cadena.size(); i++)
    {
        cout << nueva_cadena[i]<<endl;
    }
    
    return 0;
}

vector<string> separar_comas(string cadena){
    string palabra="";
    vector <string> nueva_cadena;
    for (int i = 0; i < cadena.size(); i++)
    {
        if (cadena[i] !=',')// separar las palabras por coma (,)
        {
            palabra.push_back(cadena[i]);
        }
        else if (not(palabra.empty()))
        {
            nueva_cadena.push_back(palabra);
            palabra="";
        }
    }
    if (not(palabra.empty())) //guardar la ultima palabra
    {
        nueva_cadena.push_back(palabra);
    }
    return nueva_cadena;
}