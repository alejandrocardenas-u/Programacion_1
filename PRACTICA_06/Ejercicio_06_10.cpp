// Materia: Programación I, Paralelo 4
// Autor: Alejandro Cardenas Huayta
// Carnet: 13343885
// Carrera del estudiante: Ingeniería Biomedica
// Fecha creación: 04/10/2025
// Número de ejercicio: 10

#include <iostream>
#include <vector>
#include <string>

using namespace std;

string eliminar_numeros(string cadena);
int main()
{
    system ("cls");
    string cadena;
    string nueva_cadena;
    cout << "Ingrese una cadena: ";
    getline(cin, cadena);
    nueva_cadena=eliminar_numeros(cadena);
    cout << nueva_cadena;
    return 0;
}
string eliminar_numeros(string cadena){
    string nueva_cadena;
    for (int i = 0; i < cadena.size(); i++)
    {
        if (not(int(cadena[i])>=48 && int(cadena[i])<=57)) //si la cadena pertenece a los numeros segun el codigo ASCII no se guarda xd
        {
            nueva_cadena.push_back(cadena[i]);
        }
    }
    return nueva_cadena;
}