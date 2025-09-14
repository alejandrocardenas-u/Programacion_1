// Materia: Programación I, Paralelo 4
// Autor: Alejandro Cardenas Huayta
// Carnet: 13343885
// Carrera del estudiante: Ingenieria Biomedica
// Fecha creación: 13/09/2025
// Número de ejercicio: 8

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int Calculo_ventas(int n);
int main(){
    int n;
    float Total_ventas=0.000;
    float IVA=0.000;
    system ("cls");
    srand(time(0));
    cout << "Ingrese el numero de ventas del dia: ";
    cin >> n;
    Total_ventas=Calculo_ventas(n);
    if (Total_ventas>2500)
    {
        Total_ventas=Total_ventas*0.05;
    }
    IVA=Total_ventas*0.13;
    cout << "Total ventas= "<<Total_ventas<<endl;
    cout << "IVA = "<<IVA<<endl;
    return 0;
}
int Calculo_ventas(int n){
    float suma=0.000,precio=0.000;
    int minimo=20,maximo=50;
    for (int i = 1; i <= n; i++)
    {
        precio=rand()%(maximo-minimo+1)+minimo;
        suma+=precio; // se suma el total de ventas del dia, segun precio generado aleatoriamente
    }
    return suma;
}