#include <iostream>
#include <string> 

using namespace std;

int main()
{
    system ("cls");
    string cadena;
    string cadena2;
    cout << "Ingrese una cadena:" ;
    getline(cin,cadena);
    cadena2=cadena; //copiar la variable 
    cout << "cadena:  "<<cadena2;
    return 0;
}
