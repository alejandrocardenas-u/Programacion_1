#include <iostream>
#include <string>

using namespace std;

string Minusculas(string Cadena);
int main()
{
    string cadena1="",cadena2="";
    cout << "Ingrese cadena 1: ";
    cin >> cadena1;
    cout << "Ingrese cadena 2: ";
    cin >> cadena2;
    if (Minusculas(cadena1)==Minusculas(cadena2))
    {
        cout << "las cadenas son iguales";
    }
    else
        cout << "Las cadenas no son iguales";
    return 0;
}

string Minusculas(string Cadena){
    string minusculas="";
    for (int i = 0; i < Cadena.size(); i++)
    {
        minusculas+= toupper(Cadena[i]);
    }
    return minusculas;
}
