// Materia: Programación I, Paralelo 4
// Autor: Alejandro Cardenas Huayta
// Carnet: 13343885
// Carrera del estudiante: Ingeniería Biomedica
// Fecha creación: 01/10/2025
// Número de ejercicio: 4

#include <iostream>

using namespace std;

void Multiplicacion(int N);
int main()
{
    system ("cls");
    int N;
    cout << "Ingrese N: ";
    cin >> N;
    Multiplicacion(N);
    return 0;
}

void Multiplicacion(int N){
    int A[N];
    int B[N];
    int C[N];
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
    for (int i = 0; i < N; i++)
    {
        C[i]=A[i]*B[i]; //calcular los elementos del vector C
    }
    cout << "\t A[i] \t B[i] \t C[i]"<<endl;
    for (int i = 0; i < N; i++)
    {
        cout << "\t"<<A[i]<<"\tx"<<B[i]<<"\t="<<C[i]<<endl;
    }
    
}