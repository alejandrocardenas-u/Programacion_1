#include <iostream>
#include <string>

using namespace std;

int main()
{
    string cadena;
    cout << "ingrese una cadena: ";
    getline (cin,cadena);
    if (cadena.size()>10) //condicion si es mayor a 10 la longitud de la cadena
    {
        cout << "Cadena: "<<cadena<<" , Longitud: "<< cadena.size();
    }
    return 0;
}
