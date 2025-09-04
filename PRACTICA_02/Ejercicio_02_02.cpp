/* Materia: Programación I, Paralelo 4
Autor: Alejandro Cardenas Huayta
Carnet: 13343885 L.P.
Carrera del estudiante: Ingeniería Biomedica
Fecha creación: 03/09/2025
Número de ejercicio: 2 */
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main (){
    int N, valor, Frecuencia_cara=0, Frecuencia_cruz=0;    
    system ("cls");
    srand(time(0));
    cout << "Ingrese el numero de veces que desea tirar la moneda: ";
    cin >> N;
    for (int i = 1; i < N+1; i++)
    {
        valor = (rand()%3) + 1; // se ajusta el rango a 3, para que sque valores entre 1 y 2
        if (valor ==1)
            Frecuencia_cruz +=1;
        else 
            Frecuencia_cara +=1;
    }
    cout << "Frecuencia cara: "<< (Frecuencia_cara*100/N)<<endl;
    cout << "Frecuencia cruz: "<< (Frecuencia_cruz*100/N)<<endl;
    
    return 0;

}