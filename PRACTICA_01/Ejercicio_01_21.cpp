/** Materia: Programación I, Paralelo 4
Autor: Alejandro Cardenas Huayta
Carnet: 13343885 L.P.
Carrera del estudiante: Ingeniería Biomedica
Fecha creación: 27/08/2025
Número de ejercicio: 21**/

#include <iostream>

using namespace std;

int numero1, numero2, multiplicacion;
int main(){
    cout << "ingrese el primer numero: ";
    cin >> numero1;
    cout << "ingrese el segundo numero: ";
    cin >> numero2;
    for (int i=1; i <numero2+1; i++){ //el numero 2, es la cantidad de veces que el numero 1 se suma a si mismo
        multiplicacion= multiplicacion+numero1;
    }
    cout <<numero1 << " x " << numero2 << " = " << multiplicacion;
}