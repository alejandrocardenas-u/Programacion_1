#include <iostream>
#include <string>

using namespace std;

int main()
{
    int contador_a=0,contador_e=0,contador_i=0,contador_o=0,contador_u=0;
    string cadena;
    cout << "Ingrese una cadena: ";
    getline(cin,cadena);
    for (int i = 0; i < cadena.size(); i++)
    {
        switch (cadena[i])
        {
        case 'a': contador_a++;break;
        case 'e': contador_e++;break;
        case 'i': contador_i++;break;
        case 'o': contador_o++;break;
        case 'u': contador_u++;break;
        default: break;
        }
    }
    cout << "Cantidad vocal a: "<<contador_a<<endl;
    cout << "Cantidad vocal e: "<<contador_e<<endl;
    cout << "Cantidad vocal i: "<<contador_i<<endl;
    cout << "Cantidad vocal o: "<<contador_o<<endl;
    cout << "Cantidad vocal u: "<<contador_u<<endl;
    return 0;
}
