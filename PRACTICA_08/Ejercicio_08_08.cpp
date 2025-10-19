// Materia: Programación I, Paralelo 4
// Autor: Alejandro Cardenas Huayta
// Carnet: 13343885
// Carrera del estudiante: Ingenieria Biomedica
// Fecha creación: 18/10/2025
// Número de ejercicio: 8

#include <iostream>

using namespace std;

void conjetura_ullman(int N);
int main()
{
    int N;
    system ("cls");
    do // validacion para numeros positivos
    {
        cout << "Ingrese N:";
        cin >> N;
        if (!(N>1))
        {
            cout << "Por favor Ingrese un numero positivo"<<endl;
            system("pause");
        }
    } while (!(N>1));
    conjetura_ullman(N);
    return 0;
}

void conjetura_ullman(int N){
    if (N==1) //caso base
    {
        cout << N<<"\t";
    }
    else
    {
        cout <<N<<"\t";
        if (N%2==0)
        {
            conjetura_ullman(N/2);
        }
        else
        {
            conjetura_ullman(3*N+1);
        }
    }
}