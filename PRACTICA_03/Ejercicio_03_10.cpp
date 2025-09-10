// Materia: Programación I, Paralelo 4
// Autor: Alejandro Cardenas Huayta.
// Fecha creación: 09/09/2025
// Número de ejercicio: 10
#include <iostream>
using namespace std;

double calcularTarifa(double(kmRecorridos));
int main (){
    system ("cls");
    double kmRecorridos=0.00, precio=0.00;
    cout << "Ingrese los kilometros recorridos: "<<endl;
    cin >> kmRecorridos;
    precio=calcularTarifa(kmRecorridos);
    cout << "El precio del viaje es: "<<precio<<endl;
    return 0;
}
double calcularTarifa(double(kmRecorridos)){
    double Tarifa=10.00;
    Tarifa+=kmRecorridos*2;
    if (kmRecorridos>=10)
    {
        Tarifa-=Tarifa*0.10; //descuento de 10% se la tarifa supera los 10Km
    }
    return Tarifa;
}