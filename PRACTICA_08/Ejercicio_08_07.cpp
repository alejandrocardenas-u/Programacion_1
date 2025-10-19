// Materia: Programación I, Paralelo 4
// Autor: Alejandro Cardenas Huayta
// Carnet: 13343885
// Carrera del estudiante: Ingenieria Biomedica
// Fecha creación: 18/10/2025
// Número de ejercicio: 7

#include <iostream>

using namespace std;

int suma_cuadrados(int N);

int main()
{
    system ("cls");
    int N;
    cout << "Ingrese N: ";
    cin >> N;
    cout << "La suma de los cuadrados desde 1 hasta N, es: "<<suma_cuadrados(N);
    return 0;
}

int suma_cuadrados(int N){
    if (N==1)
    {
        return N*N;
    }
    return N*N+suma_cuadrados(N-1);
}