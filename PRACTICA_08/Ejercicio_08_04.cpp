// Materia: Programación I, Paralelo 4
// Autor: Alejandro Cardenas Huayta
// Carnet: 13343885
// Carrera del estudiante: Ingenieria Biomedica
// Fecha creación: 17/10/2025
// Número de ejercicio: 4

#include <iostream>

using namespace std;

int MCD(int a,int b);

int main()
{
    system ("cls");
    int a,b,mayor;
    cout << "Ingrese el primer numero: ";
    cin >> a;
    cout << "Ingrese el segundo numero: ";
    cin >> b;
    //verificar orden
    if (a>b)
    {
        cout << "El minimo comun multipllo MCD de "<<a<<" y "<<b<<" es: "<<MCD(b,a);
    }
    else
        cout << "El minimo comun multipllo MCD de "<<a<<" y "<<b<<" es: "<<MCD(a,b);
    return 0;
}

int MCD(int a,int b)
{
    if (b==0)
    {
        return a;
    }
    return MCD(b, a%b); // a toma el mayor y b toma el residuo
}