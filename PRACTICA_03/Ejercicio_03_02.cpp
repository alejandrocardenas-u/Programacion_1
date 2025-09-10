// Materia: Programación I, Paralelo 4
// Autor: Alejandro Cardenas Huayta.
// Fecha creación: 09/09/2025
// Número de ejercicio: 2

#include <iostream>
using namespace std;
double conversion(double(celsius));
int main (){
    system ("cls");
    double celsius, Farenheit;
    cout << "Ingrese la temperatura en Celsius: "<<endl;
    cin >> celsius;
    Farenheit=conversion(celsius);
    cout << Farenheit<< " Grados Farenheit";
    return 0;
}

double conversion(double(celsius)){
    double farenheit;
    farenheit=((celsius/5)*9)+32; // conversion de celsius a farenheit
    return farenheit;
}