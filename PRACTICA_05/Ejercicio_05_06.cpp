// Materia: Programación I, Paralelo 4
// Autor: Alejandro Cardenas Huayta
// Carnet: 13343885
// Carrera del estudiante: Ingeniería Biomedica
// Fecha creación: 01/10/2025
// Número de ejercicio: 5

#include <iostream>
#include <vector>

using namespace std;
void Suma(int N);
int main()
{
    system ("cls");
    int N=5;
    Suma(N);
    return 0;
}
void Suma(int N){
    int vector1[N];
    int vector2[N];
    int vector3[N];
    for (int i = 0; i < N; i++)
    {
        cout <<"Elemento "<<i+1<< " de vector1: ";
        cin >> vector1[i];
    }
    for (int i = 0; i < N; i++)
    {
        cout <<"Elemento "<<i+1<< " de vector2: ";
        cin >> vector2[i];
    }
    for (int i = 0; i < N; i++)
    {
        vector3[i]=vector1[i]+vector2[i]; //los elemetos del vector 3 estan formados por la suma de los otros vectores
    }
    cout << "Vector 1"<<"\t+\t"<<"Vector2"<<"\t=\t"<<"Vector3"<<endl;
    for (int i = 0; i < N; i++)
    {
        cout<<"\t" <<vector1[i]<<"\t+\t"<<vector2[i]<<"\t=\t"<<vector3[i]<<endl;
    }
    
}