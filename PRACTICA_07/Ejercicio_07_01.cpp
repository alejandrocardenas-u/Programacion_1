// Materia: Programación I, Paralelo 4
// Autor: Alejandro Cardenas Huayta
// Carnet: 13343885
// Carrera del estudiante: Ingeniería de Sistemas
// Fecha creación: 15/10/2025
// Número de ejercicio: 1

#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int Aleatorio(int minimo, int maximo);
int main()
{
    system ("cls");
    srand(time(0));
    int N;
    cout << "Ingrese N:";
    cin >> N;
    int Matriz[N][N];
    int Matriz_copia[N][N];
    for (int i = 0; i < N; i++) //columnas
    {
        for (int j = 0;j < N; j++) //filas
        {
            Matriz[i][j]=Aleatorio(0,9);
        }
        
    }
    //mostrar matriz 1
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cout << Matriz[i][j]<<"\t";
        }
        cout << endl;
    }
    //copiar primera fila de la matriz
    for (int i = 0; i < 1; i++)
    {
        for (int j = 0; j < N; j++)
        {
            Matriz_copia[i][j]=Matriz[N-1][j];
        }
        
    }
    //copiar resto de la matriz
    for (int i = 1; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            Matriz_copia[i][j]=Matriz[i][j];
        }
        
    }
    cout << endl;
    //mostrar matriz 2
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cout <<Matriz_copia[i][j]<<"\t";
        }
        cout << endl;
    }
    return 0;
}

int Aleatorio(int minimo, int maximo){
    return (rand()%(maximo-minimo+1))+minimo;
}
