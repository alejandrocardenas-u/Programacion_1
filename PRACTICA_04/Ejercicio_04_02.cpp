// Materia: Programación I, Paralelo 4
// Autor: Alejandro Cardenas Huayta
// Carnet: 13343885
// Carrera del estudiante: Ingenieria Biomedica
// Fecha creación: 13/09/2025
// Número de ejercicio: 2

#include <iostream>
using namespace std;

float Calcular_volumen(float radio, float altura=10.000); // se asigna parametro por defecto
int main(){
    float altura=0.000, radio=0.000,volumen=0.000;
    system ("cls");
    cout << "Ingrese la altura del cilindro: ";
    cin >> altura;
    cout << "Ingrese el radio del cilindro: ";
    cin >> radio;
    if (altura<=0)
    {
        volumen=Calcular_volumen(radio);
    }
    else
    {
        volumen=Calcular_volumen(radio,altura);
    }
    cout << "Volumen del cilindro= "<< volumen;
    return 0;
}

float Calcular_volumen(float radio, float altura){
    float volumen=0.000;
    volumen =(3.14159*radio*radio*altura);
    return volumen;
}