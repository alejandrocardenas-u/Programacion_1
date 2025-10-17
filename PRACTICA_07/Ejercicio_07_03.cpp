// Materia: Programación I, Paralelo 4
// Autor: Alejandro Cardenas Huayta
// Carnet: 13343885
// Carrera del estudiante: Ingeniería de Sistemas
// Fecha creación: 16/10/2025
// Número de ejercicio: 3

#include <iostream>
#include <ctime>
#include <cstdlib>
#include <vector>
using namespace std;

int Aleatorio(int minimo, int maximo);
void Llenar_Matriz(char Matriz[][100],int filas, int columnas);
void Mostrar_Matriz(char Matriz[][100],int filas,int columnas);
void Filas_columnas_libres(char Matriz[][100],int filas,int columnas);
void Mostrar_posicion(char Matriz[][100],int filas,int columnas);
void Contar_muertos(char Matriz[][100],int filas,int columnas);

int main()
{
    system("cls");
    srand(time(0));
    char Matriz_mapa[100][100];
    int filas=Aleatorio(3,9);
    int columnas=Aleatorio(3,9);
    int muertos_primera_columna=0;
    Llenar_Matriz(Matriz_mapa,filas,columnas);
    Mostrar_Matriz(Matriz_mapa,filas,columnas);
    Filas_columnas_libres(Matriz_mapa,filas,columnas);
    Mostrar_posicion(Matriz_mapa,filas,columnas);
    Contar_muertos(Matriz_mapa,filas,columnas);
    for (int i = 0; i < filas; i++)
    {
        if (Matriz_mapa[i][0]=='x')
        {
            muertos_primera_columna++;
        }
    }
    if (muertos_primera_columna<2)
    {
        cout << "\nEs posible entrar al complejo";
    }
    else
        cout << "\nNo es posible entrar al complejo";
    return 0;
}

int Aleatorio(int minimo, int maximo){
    return (rand()%(maximo-minimo+1))+minimo;
}

void Llenar_Matriz(char Matriz[][100],int filas, int columnas){
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            if (Aleatorio(1,5)==1)
            {
                Matriz[i][j]='x';
            }
            else 
            {
                Matriz[i][j]='O';
            }
        }
    }
}

void Mostrar_Matriz(char Matriz[][100],int filas,int columnas){
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            cout << Matriz[i][j]<<"\t";
        }
        cout << endl;
    }
}

void Mostrar_posicion(char Matriz[][100],int filas,int columnas){
    vector<int>posicion_filas;
    vector<int>posicion_columnas;
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            if (Matriz[i][j]=='x')
            {
                posicion_filas.push_back(i);
                posicion_columnas.push_back(j);
            }
        }
    }
    cout << "\nPosiciones en el mapa: ";
    for (int i = 0; i < posicion_filas.size(); i++)
    {
        cout << "\n"<<posicion_filas[i]<<" -- "<< posicion_columnas[i];
    }
}

void Contar_muertos(char Matriz[][100],int filas,int columnas){
    int Muertos=0;
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            if (Matriz[i][j]=='x')
            {
                Muertos++;
            }
        }
    }
    cout << "\n\nTotal de muertos vivientes: "<<Muertos;
}

void Filas_columnas_libres(char Matriz[][100],int filas,int columnas){
    int filas_libres=0;
    int columnas_libres=0;
    bool fila=true;
    bool columna=true;
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            if (Matriz[i][j]=='x')
            {
                fila=false;
            }
        }
        if (fila==true)
        {
            filas_libres++;
        }
        fila=true;
    }
    for (int i = 0; i < columnas; i++)
    {
        for (int j = 0; j < filas; j++)
        {
            if (Matriz[j][i]=='x')
            {
                columna=false;
            }
        }
        if (columna==true)
        {
            columnas_libres++;
        }
        columna=true;
    }
    cout << "\nFilas libres: "<<filas_libres<<endl;
    cout << "Columnas libres: "<<columnas_libres<<endl;
}