// Materia: Programación I, Paralelo 4
// Autor: Alejandro Cardenas Huayta
// Carnet: 13343885
// Carrera del estudiante: Ingenieria Biomedica
// Fecha creación: 14/09/2025
// Número de ejercicio: 9

#include <iostream>
#include <cstdlib>
#include <ctime>
void Sueldo_vendedoras(int numero_vendedoras);
float bono_antiguedad(int antiguedad);
using namespace std;
int main(){
    srand(time(0));
    int numero_vendedoras=0;
    float Total_vendido=0;
    system ("cls");
    cout << "Ingrese el numero de vendedoras: ";
    cin >> numero_vendedoras;
    Sueldo_vendedoras(numero_vendedoras);
    return 0;
}

void Sueldo_vendedoras(int numero_vendedoras){
    int ventas=0,sueldo_basico=2750, antiguedad=0;
    float Total=0,Sueldo_total=0,precio_venta=0.00;

    for (int i = 1; i <= numero_vendedoras; i++)
    {
        ventas=rand()%(10-5+1)+5; //promedio de 10 ventas
        precio_venta=rand()%(100)+1;
        antiguedad= rand()%(30)+1;
        Sueldo_total=sueldo_basico+sueldo_basico*bono_antiguedad(antiguedad);
        cout<< "Vendedora "<<i<< " ventas: "<<ventas<< "; Total vendido: "<<precio_venta<<"; Comision de ventas: "<< ventas*precio_venta*0.10<<endl;
        cout << "Antiguedad: "<<antiguedad<<" Sueldo Total "<<Sueldo_total+ventas*precio_venta*0.10<<endl;
    }
}
float bono_antiguedad(int antiguedad){
    if (antiguedad>=2 && antiguedad<=4)
        return 0.05;
    if (antiguedad>=5 && antiguedad<=7)
        return 0.11;
    if (antiguedad>=8 && antiguedad<=10)
        return 0.18;
    if (antiguedad>=11 && antiguedad<=14)
        return 0.26;
    if (antiguedad>=15 && antiguedad<=19)
        return 0.34;
    if (antiguedad>=20 && antiguedad<=24)
        return 0.42;
    if (antiguedad>25)
        return 0.5;
    return 0;
}