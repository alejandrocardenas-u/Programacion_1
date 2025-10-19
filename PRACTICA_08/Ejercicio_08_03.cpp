// Materia: Programación I, Paralelo 4
// Autor: Alejandro Cardenas Huayta
// Carnet: 13343885
// Carrera del estudiante: Ingenieria Biomedica
// Fecha creación: 17/10/2025
// Número de ejercicio: 3

#include <iostream>

using namespace std;

int fibo(int n);

int main()
{
    int n;
    system("cls");
    cout << "Ingrese el n-esimo numero de la secuencia fbonacci: ";
    cin >> n;
    cout << "El n-esimo numero de la secuencia de fibonacci es: "<<fibo(n);
    return 0;
}

int fibo(int n)
{
    if (n==0)
    {
        return 0;
    }
    else if (n==1)
    {
        return 1;
    }
    return fibo(n-1)+fibo(n-2); //la secuencia de fibonacci genera numeros a partir de la suma de sus dos anteriores
}