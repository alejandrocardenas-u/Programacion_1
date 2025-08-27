/** Materia: Programación I, Paralelo 4
Autor: Alejandro Cardenas Huayta
Carnet: 13343885 L.P.
Carrera del estudiante: Ingeniería Biomedica
Fecha creación: 26/08/2025
Número de ejercicio: 14**/

#include <iostream>

using namespace std;

int N, repeticiones;
int main (){
    cout << "Ingresa un numero: ";
    cin >> N;
    for (int i = 1; i < N+1; i++) //ciclo repetitivo para ir subiendo de uno en uno la cantidad de *
    {
        repeticiones = i; // se guardo el valor de i para evitar bucle infinito
        while (repeticiones>0) //ciclo while para imprimir por pantalla, segun variable i
        {
            cout << "*";
            repeticiones = repeticiones-1;
        }
        cout << endl;
    }
    
    return 0;
}