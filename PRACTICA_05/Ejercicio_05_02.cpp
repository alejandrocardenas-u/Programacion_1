// Materia: Programación I, Paralelo 4
// Autor: Alejandro Cardenas Huayta
// Carnet: 13343885
// Carrera del estudiante: Ingeniería Biomedica
// Fecha creación: 01/10/2025
// Número de ejercicio: 2

#include <iostream>

using namespace std;

int main()
{
    float voltios[9] {11.95, 16.32, 12.15, 8.22, 15.98, 26.22, 13.54, 6.45, 17.59};
    for (int i = 0; i < 9; i++)
    {
        if (i%3==0) // para formar la matriz
        {
            cout << "\n";
        }  
        cout << voltios[i]<<"\t";
    }
    return 0;
}
