// Materia: Programación I, Paralelo 4
// Autor: Alejandro Cardenas Huayta
// Carnet: 13343885
// Carrera del estudiante: Ingeniería de Sistemas
// Fecha creación: 16/10/2025
// Número de ejercicio: 5

#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

void Llenar_matriz(int matriz[][100],int filas,int columnas);
int Aleatorio(int minimo, int maximo);
void Mostrar_matriz (int matriz[][100],int filas, int columnas);
void Multiplicar_matrices(int matriz_A[][100],int matriz_B[][100],int N,int M);
int main()
{
    system ("cls");
    srand(time(0));
    int N=0,M=0;
    int matriz_A[100][100];
    int matriz_B[100][100];
    cout << "Ingrese el numero de filas de la matriz A, y el numero de columnas de la matriz B: ";
    cin >> N;
    cout << "Ingrese el numero de filas de la matriz B, y el numero de columnas de la matriz A: ";
    cin >> M;
    Llenar_matriz(matriz_A,N,M);
    Llenar_matriz(matriz_B,M,N);
    cout << "Matriz A: \n";
    Mostrar_matriz(matriz_A,N,M);
    cout << "Matriz B: \n";
    Mostrar_matriz(matriz_B,M,N);
    Multiplicar_matrices(matriz_A,matriz_B,N,M);
    return 0;
}

void Llenar_matriz(int matriz[][100],int filas,int columnas){
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            matriz[i][j]=Aleatorio(1,99);
        }
    }
}

int Aleatorio(int minimo, int maximo){
    return (rand()%(maximo-minimo+1))+minimo;
}

void Mostrar_matriz (int matriz[][100],int filas, int columnas){
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            cout << matriz[i][j]<<"\t";
        }
    cout << endl;
    }
}

void Multiplicar_matrices(int matriz_A[][100],int matriz_B[][100],int N,int M){
    int Matriz_resultante[100][100]={0};
    for (int i = 0; i < N; i++) //filas matriz resultante
    {
        for (int j = 0; j < N; j++) //columnas matriz resultante
        {
            for (int k = 0; k < M;k++)
            {
                Matriz_resultante[i][j]+=matriz_A[i][k]*matriz_B[k][j];
            }
        }
    }
    cout << "Matriz resultante: \n";
    Mostrar_matriz(Matriz_resultante,N,N);
}