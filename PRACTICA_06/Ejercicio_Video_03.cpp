#include <iostream>
#include <string>

using namespace std;

int main()
{
    string cadena1;
    string cadena2;
    cout << "Ingrese la cadena 1: ";
    getline(cin,cadena1);
    cout << "Ingrese la cadena 2: ";
    getline(cin,cadena2);
    if (cadena1==cadena2)
    {
        cout << "las cadenas son iguales"<<endl;
    }
    else if (cadena1 > cadena2)
    {
        cout << "la cadena 1 "<<cadena1<<" es mayor que la cadena 2";
    }
    else
    cout << "La cadena 2 "<< cadena2<<" es mayor que la cadena 1";
    return 0;
}
