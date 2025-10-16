// Materia: Programación I, Paralelo 4
// Autor: Alejandro Cardenas Huayta
// Carnet: 13343885
// Carrera del estudiante: Ingeniería de Sistemas
// Fecha creación: 16/10/2025
// Número de ejercicio: 6

#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

void Llenar_matriz(int Matriz[][100],int filas, int columnas);
int Aleatorio(int minimo, int maximo);
void Mostrar_matriz(int Matriz[][100],int filas,int columnas);
void Transponer_matriz(int Matriz[][100],int filas,int columnas);
int main()
{
    system ("cls");
    srand(time(0));
    int N=0,M=0;
    int Matriz[100][100];
    cout << "Ingrese el numero de filas : ";
    cin >> N;
    cout << "Ingrese el numero de columnas: ";
    cin >> M;
    Llenar_matriz(Matriz,N,M);
    cout << "Matriz Original: "<<endl;
    Mostrar_matriz(Matriz,N,M);
    Transponer_matriz(Matriz,N,M);
    return 0;
}

void Llenar_matriz(int Matriz[][100],int filas, int columnas){
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            Matriz[i][j]=Aleatorio(0,99);
        }
    }
}

int Aleatorio(int minimo, int maximo){
    return (rand()%(maximo-minimo+1))+minimo;
}

void Mostrar_matriz(int Matriz[][100],int filas,int columnas){
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            cout << Matriz[i][j]<<"\t";
        }
        cout << endl;
    }
}

void Transponer_matriz(int Matriz[][100],int filas,int columnas){
    int Matriz_transpuesta[100][100];
    for (int i = 0; i < columnas; i++)
    {
        for (int j = 0; j < filas; j++)
        {
            Matriz_transpuesta[i][j]=Matriz[j][i];
        }
    }
    cout << "matriz transpuesta"<<endl;
    Mostrar_matriz(Matriz_transpuesta,columnas,filas);
}