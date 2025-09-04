/* Materia: Programación I, Paralelo 4
Autor: Alejandro Cardenas Huayta
Carnet: 13343885 L.P.
Carrera del estudiante: Ingeniería Biomedica
Fecha creación: 03/09/2025
Número de ejercicio: 7 */
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main (){
    system ("cls");
    int cantidad_total,ninos_1,ninos_2,ninos_3,paniales=0;
    srand(time(0));
    cout << "Ingrese a cantidad de ninios: ";
    cin >> cantidad_total;
    ninos_1=rand()%(cantidad_total+1);// saca un numero aleatorio entre 0 y la cantidad total de niños
    cantidad_total=cantidad_total-ninos_1; // se resta la cantidad de niños n1 para que de correcta la suma
    ninos_2=rand()%(cantidad_total+1);
    cantidad_total = cantidad_total-ninos_2;
    ninos_3=cantidad_total; // niños 3, queda con el sobrante de las dos anteriores 
    paniales=(ninos_1*6)+(ninos_2*3)+(ninos_3*2)  ;
    cout << "la cantidad total de paniales es "<< paniales;
    return 0;
}