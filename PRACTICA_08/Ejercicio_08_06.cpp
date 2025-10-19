// Materia: Programación I, Paralelo 4
// Autor: Alejandro Cardenas Huayta
// Carnet: 13343885
// Carrera del estudiante: Ingenieria Biomedica
// Fecha creación: 18/10/2025
// Número de ejercicio: 6

#include <iostream>
#include <vector>

using namespace std;

bool comparar_vectores(vector <int> vector_1,vector <int> vector_2, int i=0);

int main()
{
    vector <int> vector_1(10);
    vector <int> vector_2(10);
    system ("cls");
    for (int i = 0; i < 10; i++)
    {
        cout << "Ingrese el elemento "<<i+1<<" del vector 1: ";
        cin >>vector_1[i];
    }
    for (int i = 0; i < 10; i++)
    {
        cout << "Ingrese el elemento "<<i+1<<" del vector 2: ";
        cin >>vector_2[i];
    }
    
    if (comparar_vectores(vector_1, vector_2)==true)
    {
        cout << "Los vectores son iguales";
    }
    else
        cout << "Los vectores no son iguales";
    return 0;
}

bool comparar_vectores(vector <int> vector_1,vector <int> vector_2, int i){
    if (size(vector_1)!=size(vector_2))//verificar tamaños de los vectores
    {
        return false;
    }
    if (i==vector_1.size())//caso base, cuando ya se compararon todos los elementos del vector
    {
        return true;
    }
    if (vector_1[i]!=vector_2[i])//verificar elemento por elemento
    {
        return false;
    }
    return comparar_vectores(vector_1,vector_2,i+1);
}