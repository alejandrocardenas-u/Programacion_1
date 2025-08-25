/** Materia: Programación I, Paralelo 4
Autor: Alejandro Cardenas Huayta
Carnet: 13343885 L.P.
Carrera del estudiante: Ingeniería Biomedica
Fecha creación: 24/08/2025
Número de ejercicio: 7**/

#include <iostream>
using namespace std;

char letra = 0;
int main(){
    cout<<"ingrese una letra: ";
    cin >> letra;
    if ((letra >=65 && letra <=90) || (letra >=97 && letra <=122)) //validacion de que es una letra con el codigo ASCII
        if (letra == 'a' ||letra == 'e' ||letra == 'i' ||letra == 'o' ||letra == 'u' || letra == 'A' ||letra == 'E' ||letra == 'I' ||letra == 'O' ||letra == 'U' )
            cout << letra << " es una vocal";
        else
            cout << letra << " es una consonante";
    else
        cout << "es un caracter especial";
        return 0;
}