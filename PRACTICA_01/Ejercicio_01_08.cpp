/** Materia: Programación I, Paralelo 4
Autor: Alejandro Cardenas Huayta
Carnet: 13343885 L.P.
Carrera del estudiante: Ingeniería Biomedica
Fecha creación: 26/08/2025
Número de ejercicio: 8**/

#include <iostream>

using namespace std;

int numero;
int main(){
    cout<<"Ingresa un numero : ";
    cin>> numero;
    if (numero%2==0) //el modulo (%) de un numero es el resto de la division entera
        cout<<"el numero "<<numero<<" es par";
    else
        cout<<"el numero "<<numero<<" es impar";
}
