// Materia: Programación I, Paralelo 4
// Autor: Alejandro Cardenas Huayta
// Carnet: 13343885
// Carrera del estudiante: Ingeniería Biomedica
// Fecha creación: 04/10/2025
// Número de ejercicio: 9

#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector <string> recibir_vector();
int main()
{
    system ("cls");
    vector<string>nueva_cadena;
    vector<string>cadena=recibir_vector();
    for (int i = cadena.size()-1; i >= 0; i--)// dar cuelta la cadena de string
    {
        nueva_cadena.push_back(cadena[i]);
    }
    for (int i = 0; i < nueva_cadena.size(); i++)
    {
        cout << nueva_cadena[i]<<" ";
    }
    return 0;
}
vector <string> recibir_vector(){// transformar una cadena char a un vector string
    string cadena_ingresada,palabra="";
    vector <string> cadena;
    cout << "Ingrese una cadena: ";
    getline(cin,cadena_ingresada);
    for (int i = 0; i < cadena_ingresada.size(); i++)
    {
        if (cadena_ingresada[i] != ' ') //separar las palabras por espacio
        {
            palabra.push_back(cadena_ingresada[i]);
        }
        else if (not( palabra.empty()))// revisar si la palabra esta vacia, si no esta se guarda
        {
            cadena.push_back(palabra);
            palabra="";
        }
    }
        if (not( palabra.empty()))//guardar la palabra sobrante
    {
        cadena.push_back(palabra);
    }
    for (int i = 0; i < cadena.size(); i++)
    {
        //cout <<cadena[i]<<" ";
    }
    return cadena;
}