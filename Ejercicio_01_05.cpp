/** Materia: Programación I, Paralelo 4
Autor: Alejandro Cardenas Huayta
Carnet: 13343885 L.P.
Carrera del estudiante: Ingeniería Biomedica
Fecha creación: 24/08/2025
Número de ejercicio: 5**/

#include <iostream>

using namespace std;

float centigrados;
float kelvin=0.00; //se puso dos decimales para que el calculo coincida con los dos decimales de la conversion de C a K
int main(){
    cout << "ingrese una temperatura en grados centigrados: ";
    cin >> centigrados;
    kelvin=centigrados+273.15;
    cout << "Temperatura en kelvin: " << kelvin; 
}