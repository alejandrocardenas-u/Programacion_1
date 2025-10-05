// Materia: Programación I, Paralelo 4
// Autor: Alejandro Cardenas Huayta
// Carnet: 13343885
// Carrera del estudiante: Ingeniería Biomedica
// Fecha creación: 04/10/2025
// Número de ejercicio: 8

#include <iostream>
#include <vector>
#include <string>

using namespace std;

bool verifica_correo(string correo);
bool Validar_punto(string dominio);
int main()
{
    system ("cls");
    string correo;
    bool Validar;
    cout << "Ingrese su correo: ";
    getline(cin, correo);
    Validar=verifica_correo(correo);
    if (Validar==true)
    {
        cout << "correo electronico valido";
    }
    else
        cout << "correo electronico invalido";
    return 0;
}

bool verifica_correo(string correo){
    int contador_arroba=0;
    bool validar_punto=false;
    string dominio;
    for (int i = 0; i < correo.size(); i++)
    {
        if (correo[i]=='@')
        {
            contador_arroba++;
            dominio=correo.substr(i, correo.size()-1);// crear una subcadena despues del arroba
            validar_punto=Validar_punto(dominio);
        }
    }
    if (contador_arroba==1 && validar_punto==true)
    {
        return true;
    }
    else
        return false;
}
bool Validar_punto(string dominio){
    for (int i = 0; i < dominio.size(); i++)
    {
        if (dominio[i]=='.')
        {
            return true;
        }
    }
    return false;
}