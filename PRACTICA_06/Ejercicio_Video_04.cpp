#include <iostream>
#include <string>

using namespace std;

int main()
{
    string cadena1= "Hola que tal ";
    string nombre;
    cout << "Ingrese su nombre: ";
    getline(cin, nombre);
    cadena1+=nombre;
    cout << cadena1;
    return 0;
}
