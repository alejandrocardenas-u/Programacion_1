// Materia: Programación I, Paralelo 4
// Autor: Alejandro Cardenas Huayta
// Carnet: 13343885
// Carrera del estudiante: Ingeniería Biomedica
// Fecha creación: 04/10/2025
// Número de ejercicio: 14

#include <iostream>
#include <string>

using namespace std;

void Mostrar_contador(string cadena);

int main()
{
    string cadena;
    cout << "Ingrese una cadena: ";
    getline(cin,cadena);
    Mostrar_contador(cadena);
    return 0;
}
void Mostrar_contador(string cadena){
    int contador_a=0,contador_e=0,contador_i=0,contador_o=0,contador_u=0;
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
}