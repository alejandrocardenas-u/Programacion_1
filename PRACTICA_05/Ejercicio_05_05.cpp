// Materia: Programación I, Paralelo 4
// Autor: Alejandro Cardenas Huayta
// Carnet: 13343885
// Carrera del estudiante: Ingeniería Biomedica
// Fecha creación: 01/10/2025
// Número de ejercicio: 5

#include <iostream>
#include <vector>

using namespace std;

void Combinacion(int N);
int main()
{
    system ("cls");
    int N;
    cout << "Ingrese N: ";
    cin >> N;
    Combinacion(N);
    return 0;
}

void Combinacion(int N){
    int A[N];
    int B[N];
    int C[2*N];
    for (int i = 0; i < N; i++)
    {
        cout <<"Elemento "<<i+1<< " de A: ";
        cin >> A[i];
    }
    for (int i = 0; i < N; i++)
    {
        cout <<"Elemento "<<i+1<< " de B: ";
        cin >> B[i];
    }
    for (int i = 0; i < 2*N; i++)// el bucle va hasta 2N para cubrir todos los espacios de C
    {
        for (int i = 0; i < N; i++)
        {
            C[i]=A[i];
        }
        for (int i = 0; i < N; i++)
        {
            C[N+i]=B[i];
        }
    }
    for (int i = 0; i < N; i++)
    {
        cout << "A "<<i+1<<"= "<<A[i]<<endl;
    }
    for (int i = 0; i < N; i++)
    {
        cout << "B "<<i+1<<" = "<<B[i]<<endl;
    }
    for (int i = 0; i < 2*N; i++)
    {
        cout << "C "<<i+1<<" = "<<C[i]<<endl;
    }
}