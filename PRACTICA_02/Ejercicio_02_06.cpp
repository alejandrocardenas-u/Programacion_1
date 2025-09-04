/* Materia: Programación I, Paralelo 4
Autor: Alejandro Cardenas Huayta
Carnet: 13343885 L.P.
Carrera del estudiante: Ingeniería Biomedica
Fecha creación: 03/09/2025
Número de ejercicio: 6 */
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main(){
    system ("cls");
    int N, numero, cantidad_divisores, cantidad_primos=0;
    srand(time(0));
    cout << "Ingrese N; ";
    cin >> N;
    for (int i = 1; i < N+1; i++)
    {
        numero = rand()%10001;
        cout << numero << "  ";
        cantidad_divisores=0;
        for (int d = 1; d < numero+1; d++) //se cambio la variable i por d, para evitar confusion con el ciclo de afuera
        {
            if (numero%d==0)
                cantidad_divisores +=1;
        }
        if (cantidad_divisores==2)
        {
            cantidad_primos +=1;
        }
    }
    cout << "cantidad de primos= "<< cantidad_primos;
    return 0;
}