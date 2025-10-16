// Materia: Programación I, Paralelo 4
// Autor: Alejandro Cardenas Huayta
// Carnet: 13343885
// Carrera del estudiante: Ingeniería de Sistemas
// Fecha creación: 16/10/2025
// Número de ejercicio: 2

#include <iostream>
#include <ctime>
#include <cstdlib>
#include <cmath>

using namespace std;

void Llenar_Matriz(int Matriz[][100],int N, int min, int max);
int Aleatorio(int minimo, int maximo);
void SUMA_ultima_columna(int Matriz[][100],int N);
void Producto_uiltima_fila(int Matriz[][100],int N);
void Mostrar_Mayor(int Matriz[][100], int N);
void Desviacion_estandar(int Matriz[][100], int N);
void Mostrar_Matriz(int Matriz[][100], int N);
float Sacar_media(int Matriz[][100],int N);

int main()
{
    system ("cls");
    srand(time(0));
    int Matriz[100][100];
    int N=0,min=0,max=0;
    cout << "Ingrese N: ";
    cin >> N;
    cout << "Ingrese minimo: ";
    cin >>min;
    cout << "Ingrese Maximo: ";
    cin >> max;
    Llenar_Matriz(Matriz, N, min, max);
    Mostrar_Matriz(Matriz,N);
    SUMA_ultima_columna(Matriz,N);
    Producto_uiltima_fila(Matriz,N);
    Mostrar_Mayor(Matriz, N);
    Desviacion_estandar(Matriz,N);
    return 0;
}

void Llenar_Matriz(int Matriz[][100],int N, int min, int max){
    for (int i = 0; i < N; i++) //Filas
    {
        for (int j = 0; j < N; j++)
        {
            Matriz[i][j]=Aleatorio(min,max);
        }
    }
}

int Aleatorio(int minimo, int maximo){
    return (rand()%(maximo-minimo+1))+minimo;
}

void Mostrar_Matriz(int Matriz[][100], int N){
    cout << "\nMatriz generada:\n";
    for (int i = 0; i < N; i++){
        for (int j = 0; j < N; j++){
            cout << Matriz[i][j] << "\t";
        }
        cout << endl;
    }
}

void SUMA_ultima_columna(int Matriz[][100],int N){
    int suma=0;
    for (int i = 0; i < N; i++)
    {
        suma+= Matriz[i][N-1]; // para que no varie las columnas, pero si las filas
    }
    cout << "suma de la ultima columna = "<<suma;
}

void Producto_uiltima_fila(int Matriz[][100],int N){
    int Producto=1;
    for (int i = 0; i < N; i++)
    {
        Producto*=Matriz[N-1][i];//para que recorra todas las columnas pero no las filas
    }
    cout << "\nProducto de la ultima fila= "<<Producto<<endl;
}

void Mostrar_Mayor(int Matriz[][100], int N){
    int maximo=0;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (maximo==0|| Matriz[i][j]>maximo)
            {
                maximo=Matriz[i][j];
            }
        }
    }
    cout << "El maximo es: "<<maximo<<endl;
}

void Desviacion_estandar(int Matriz[][100], int N){
    float Varianza=0.00;
    float Media=Sacar_media(Matriz,N);
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            Varianza+= pow((Matriz[i][j]-Media),2); 
        }
    }
    cout << "Desviacion_estandar: "<<sqrt(Varianza/(N*N)); //(n*n, dado que son N columnas por N filas)
}

float Sacar_media(int Matriz[][100],int N){
    float suma=0.000;
    float media=0;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            suma+=Matriz[i][j];
        }
    }
    media=suma/(N*N);
    return media;
}