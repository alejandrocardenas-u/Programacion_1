// Materia: Programación I, Paralelo 4
// Autor: Alejandro Cardenas Huayta
// Carnet: 13343885
// Carrera del estudiante: Ingeniería Biomedica
// Fecha creación: 04/10/2025
// Número de ejercicio: 12

#include <iostream>
#include <vector>
#include <string>

using namespace std;

bool verificar_palindromo(string cadena);
string Limpiar(string cadena);
string dar_vuelta(string cadena);
int main()
{
    string cadena;
    cout << "Ingrese una palabra: ";
    getline(cin,cadena);
    bool es_palindromo=verificar_palindromo(cadena);
    (es_palindromo)? cout << "es palindromo":cout << "no es palindromo"; // (condicion) ? valor_verdadero:valor_falso
    return 0;
}

bool verificar_palindromo(string cadena){
    string cadena_limpia=Limpiar(cadena);//eliminar espacios, tildes acentos etc;
    string cadena_al_reves=dar_vuelta(cadena_limpia);
    if (cadena_limpia==cadena_al_reves)
    {
        return true;
    }
    return false;
}

string Limpiar(string cadena){
    string nueva_cadena,minusculas;
    for (int i = 0; i < cadena.size(); i++)
    {
        if ((int(cadena[i])>=65 && int(cadena[i])<= 90)||(int(cadena[i])>=97 && int(cadena[i])<=122))
        {
            nueva_cadena.push_back(cadena[i]);
        }
    }
    for (int i = 0; i < nueva_cadena.size(); i++)
    {
        minusculas.push_back(tolower(nueva_cadena[i]));
    }
    
    return minusculas;
}
string dar_vuelta(string cadena){
    string nueva_cadena;
    for (int i = cadena.size()-1; i >= 0; i--)
    {
        nueva_cadena.push_back(cadena[i]);
    }
    return nueva_cadena;
}