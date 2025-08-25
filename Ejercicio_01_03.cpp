/** Materia: Programación I, Paralelo 4
Autor: Alejandro Cardenas Huayta
Carnet: 13343885 L.P.
Carrera del estudiante: Ingeniería Biomedica
Fecha creación: 24/08/2025
Número de ejercicio: 3**/

#include <iostream>

using namespace std;
float base,altura;
float area=0.00; //se puso dos decimales para el calculo de un area mas exacta
int main(){
    cout << "ingrese la base del triangulo"<<endl;
    cin>>base;
    cout << "Ingrese la altura del triangulo"<<endl;
    cin>>altura;
    area=base*altura/2;
    cout<< "area del triangulo= "<< area;
    return 0;
}