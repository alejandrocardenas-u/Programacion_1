// Materia: Programación I, Paralelo 4
// Autor: Alejandro Cardenas Huayta
// Carnet: 13343885
// Carrera del estudiante: Ingenieria Biomedica
// Fecha creación: 13/09/2025
// Número de ejercicio: 4

#include <iostream>
using namespace std;

float Convertir_Celsius_a_Farenheit(float Celsius);
float Mayor_temperatura(float primer_temperatura,float segunda_temperatura);
int main(){
    float Celsius=0.000, Farenheit=0.00,primer_temperatura=0.000,segunda_temperatura=0.000,Mayor=0.000;
    system ("cls");
    cout << "Ingrese una temperatura en celsius: ";
    cin >> Celsius;
    Farenheit = Convertir_Celsius_a_Farenheit(Celsius);
    cout << Farenheit << " Grados Farenheit"<<endl;
    cout << "Ingrese la primera temperatura: ";
    cin >> primer_temperatura;
    cout << "Ingrese la segunda temperatura: ";
    cin >> segunda_temperatura;
    Mayor=Mayor_temperatura(primer_temperatura,segunda_temperatura); //se llama un modulo que calcula la mayor de las temperaturaas
    cout << Mayor;
    return 0;
}

float Convertir_Celsius_a_Farenheit(float Celsius){
    float Farenheit=0.000;
    Farenheit=((Celsius/5.000)*9)+32;
    return Farenheit;
}

float Mayor_temperatura(float primer_temperatura,float segunda_temperatura){
    if (primer_temperatura>segunda_temperatura)
    {
        return primer_temperatura;
    }
    else
    {
        return segunda_temperatura;
    }
}