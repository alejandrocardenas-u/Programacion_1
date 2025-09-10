// Materia: Programación I, Paralelo 4
// Autor: Alejandro Cardenas Huayta.
// Fecha creación: 09/09/2025
// Número de ejercicio: 1
#include <iostream>
using namespace std;

bool es_par(int(numero)); 
int main() {
    system ("cls");
    int numero, condicion;
    cout << "Ingrese un numero: ";
    cin >> numero;
    condicion=es_par(numero); //la funcion nos dice si es verdad o no que el numero es par
    if (condicion==true) 
    {
        cout << "Es par";
    }
    else{
        cout << "Es impar";
    }
    return 0;
}

bool es_par(int(numero)){
    if (numero % 2==0)
    {
        return true;
    }
    else
    {
        return false;
    }
}