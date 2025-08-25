/** Materia: Programación I, Paralelo 4
Autor: Alejandro Cardenas Huayta
Carnet: 13343885 L.P.
Carrera del estudiante: Ingeniería Biomedica
Fecha creación: 24/08/2025
Número de ejercicio: 4**/

#include <iostream>

using namespace std;

float PI=3.1416;
float radio;
float volumen=0.00;
int main(){
    cout<<"Ingrese el radio de la esfera: ";
    cin>>radio;
    volumen=4.00/3.00 *PI*radio*radio*radio; //se pone dos 00 al numerador y denominador de la division para que el resultado salga mas exacto
    cout << "El volumen de la esfera es de: "<< volumen;
    return 0;
}