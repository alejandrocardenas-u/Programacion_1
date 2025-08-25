/** Materia: Programación I, Paralelo 4
Autor: Alejandro Cardenas Huayta
Carnet: 13343885 L.P.
Carrera del estudiante: Ingeniería Biomedica
Fecha creación: 24/08/2025
Número de ejercicio: 6**/

#include <iostream>

using namespace std;

 int numero;
 int main(){
    cout<<"ingrese un numero entero: ";
    cin >> numero;
    if (numero>0) //se utiliza el operador if porque el switch solo acepta numeros y no operaciones booleanas
        cout << "el numero es positivo";
    else if (numero<0)
        cout << "el numero es negativo";
    else
        cout << "el numero es 0";

 }