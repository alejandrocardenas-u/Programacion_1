#include <iostream>
#include <string>

using namespace std;

int main()
{
    string invertido="";
    string palabra;
    cout << "Ingrese una palabra ";
    getline(cin,palabra);
    for (int i = palabra.size()-1; i >= 0; i--)
    {
        invertido+=palabra[i];
    }
    // cout << invertido<<endl;
    // cout << palabra<<endl;
    if (palabra==invertido)
        cout << "es palindromo";
    else
        cout << "no es palindromo";
    return 0;
}
