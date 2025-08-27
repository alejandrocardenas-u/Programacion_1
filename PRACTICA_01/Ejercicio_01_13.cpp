/** Materia: Programación I, Paralelo 4
Autor: Alejandro Cardenas Huayta
Carnet: 13343885 L.P.
Carrera del estudiante: Ingeniería Biomedica
Fecha creación: 26/08/2025
Número de ejercicio: 13**/

#include <iostream>

using namespace std;

int N, Sumatoria = 0;
int main(){
    cout << "ingrese un numero: ";
    cin >> N;
    for (int i = 1; i < N+1; i++) // el ciclo for va desde 1 hasta el valor de N
    {
        Sumatoria = Sumatoria + i; // la sumatoria se acumula cada vez con el valor de i segun el ciclo
    }
    cout << "sumatoria = " << Sumatoria;
    return 0;
}
