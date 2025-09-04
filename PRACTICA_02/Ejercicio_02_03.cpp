/* Materia: Programación I, Paralelo 4
Autor: Alejandro Cardenas Huayta
Carnet: 13343885 L.P.
Carrera del estudiante: Ingeniería Biomedica
Fecha creación: 03/09/2025
Número de ejercicio: 3 */
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main (){
    system ("cls");
    srand(time(0));
    int numero, factorial=1;
    numero = rand()%10; // para evitar que el numero sea muy grande se limita a 10 el limite
    for (int i=1 ; i<numero+1; i++)
    {
        factorial=factorial*i;
    }
    cout << "Factorial de "<< numero<< " = "<< factorial;
    return 0;
}