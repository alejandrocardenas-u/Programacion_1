// Materia: Programación I, Paralelo 4
// Autor: Alejandro Cardenas Huayta.
// Fecha creación: 09/09/2025
// Número de ejercicio: 4
#include <iostream>
using namespace std;

double calculo_IMC(double(peso), double(altura));
int main (){
    system ("cls");
    double altura, peso, IMC;
    cout << "Ingrese el peso en kilogramos: ";
    cin >> peso;
    cout << "Ingrese su altura en metros: ";
    cin >> altura;
    IMC = calculo_IMC(peso,altura);
    cout << "Su IMC es: "<<IMC;
    return 0;
}
double calculo_IMC(double(peso), double(altura)){
    double IMC=0;
    IMC=peso/(altura*altura); 
    return IMC;
}