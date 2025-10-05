#include <iostream>
#include <string>

using namespace std;

int main()
{
    string nombre,mayusculas="";
    cout << "Ingrese su nombre en Mayusculas: ";
    getline(cin,nombre);
    if (nombre[0]=='A')
    {
        for (int i = 0; i < nombre.size(); i++)
        {
            mayusculas+=tolower(nombre[i]);
        }
        nombre=mayusculas;
    }
    cout<<nombre;
    return 0;
}
