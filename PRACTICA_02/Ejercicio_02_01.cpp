/* Materia: Programación I, Paralelo 4
Autor: Alejandro Cardenas Huayta
Carnet: 13343885 L.P.
Carrera del estudiante: Ingeniería Biomedica
Fecha creación: 03/09/2025
Número de ejercicio: 1 */
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
    system (" cls ");
    int N, frecuencia_pares = 0, numero;
    srand (time(0));
    cout << "Ingrese la cantidad de veces que desea tirar un dado: ";
    cin >> N;
    for (int i = 1; i < N+1; i++)
    {
        numero = rand()%7; // se ajusta el rango a 7, para que saque valores entre 1-6
        if (numero%2 == 0){
            frecuencia_pares += 1;
        }
    }
    cout<<"frecuencia de numeros pares= "<<frecuencia_pares;
    return 0;
}
