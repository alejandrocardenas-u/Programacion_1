#include <iostream>
#include <string>

using namespace std;

int main()
{
    int entero=0;
    float real=0.0000,suma=0.0000;
    string cadena_entero;
    string cadena_real;
    cout << "Ingrese un numero entero: ";
    getline(cin,cadena_entero);
    cout << "Ingrese un numero real: ";
    getline(cin,cadena_real);
    entero=stoi(cadena_entero);
    real=stof(cadena_real);
    suma=entero+real;
    cout << "Suma de "<<cadena_entero<<" + "<<cadena_real<<" = "<<suma;
    return 0;
}
