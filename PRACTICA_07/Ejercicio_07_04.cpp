// Materia: Programación I, Paralelo 4
// Autor: Alejandro Cardenas Huayta
// Carnet: 13343885
// Carrera del estudiante: Ingeniería de Sistemas
// Fecha creación: 16/10/2025
// Número de ejercicio: 4

#include <iostream>

using namespace std;

void Llenar_Matriz(int matriz[][100],int N);
void Mostrar_Matriz(int matriz[][100],int N);

int main()
{
    system ("cls");
    int N;
    int matriz[100][100];
    cout << "Ingrese N:";
    cin >> N;
    Llenar_Matriz(matriz,N);
    Mostrar_Matriz(matriz,N);
    return 0;
}

void Llenar_Matriz(int matriz[][100],int N){
    int suma=3,valor=1;
    for (int i = 0; i < N; i++)
    {
        for (int  j = 0; j < N; j++)
        {
            matriz[i][j]=valor;
            valor++;
        }
        valor = suma; //toma el valor inicial
        suma=suma+2; //se modifica el valor inicial
    }
}

void Mostrar_Matriz(int matriz[][100],int N){
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cout << matriz[i][j]<<"\t";
        }
        cout << endl;
    }
}