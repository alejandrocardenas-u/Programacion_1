/** Materia: Programación I, Paralelo 4
Autor: Alejandro Cardenas Huayta
Carnet: 13343885 L.P.
Carrera del estudiante: Ingeniería Biomedica
Fecha creación: 27/08/2025
Número de ejercicio: 18**/

#include <iostream>

using namespace std;
int divisores, divisor, numero= 2;
int main (){
    int N=100;
    while (N>0){
        divisores = 0; 
        divisor = 1; 
        while (numero>=divisor){
            if (numero%divisor==0){
                divisores = divisores +1; // un numero primo solo tiene 2 divisores, 1 y por si mismo
            }
            divisor=divisor +1;
        }
        if (divisores ==2){ 
            cout << numero<< " ";
            N=N-1; // solo si el numero es primo se resta 1 al numero de primos a mostrar
        }
        numero=numero+1;
    }
    return 0;
}