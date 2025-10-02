// Materia: Programación I, Paralelo 4
// Autor: Alejandro Cardenas Huayta
// Carnet: 13343885
// Carrera del estudiante: Ingeniería Biomedica
// Fecha creación: 01/10/2025
// Número de ejercicio: 7

#include <iostream>
#include <vector>

using namespace std;


int main()
{
    system ("cls");
    int N=0,elemento,contador=0;
    vector <int> Numeros(10);
    for (int i = 0; i < 10; i++)
    {

        cout << "Ingrese un numero entero: ";
        cin >> N;
        if (N > 0)
        {
            Numeros[i]=N;
        }
        else
        { 
            i=10;
        }
    }
    for (int i = 0; i < Numeros.size(); i++)
    {
        if (Numeros[i]>0)
        {
            cout << "Elemento "<<i+1<<" : " <<Numeros[i]<<endl;
        }
    }

}
