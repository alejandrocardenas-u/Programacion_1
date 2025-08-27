/** Materia: Programación I, Paralelo 4
Autor: Alejandro Cardenas Huayta
Carnet: 13343885 L.P.
Carrera del estudiante: Ingeniería Biomedica
Fecha creación: 26/08/2025
Número de ejercicio: 15**/

#include <iostream>

using namespace std;
int N=0, nota=0, cantidad=0;
float Promedio = 0.00, suma = 0.00; //para un promedio mas exacto con decimales se puso el promedio con dos decimales
// dado que un numero entero entre un numero entero da un numero entero, se puso la variable suma igual con dos decimales
int main(){
    cout << "Ingrese el numero de promedios a evaluar: ";
    cin >> N;
    cantidad =N;
    while (N>0)
    {
        N=N-1;
        cout << "Ingrese nota; ";
        cin >> nota;
        suma=suma+nota;
    }
    Promedio = suma/cantidad;
    cout << "el promedio de "<< cantidad <<" estudiantes es de: "<< Promedio;
    return 0;
}