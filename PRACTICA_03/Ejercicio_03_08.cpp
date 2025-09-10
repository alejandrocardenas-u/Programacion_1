// Materia: Programación I, Paralelo 4
// Autor: Alejandro Cardenas Huayta.
// Fecha creación: 09/09/2025
// Número de ejercicio: 8

#include <iostream>
using namespace std;

void Billetes(int&(dinero));
void Monedas(int&(dinero));
int main(){
    int dinero=0;
    system ("cls");
    cout << "Ingrese el dinero: ";
    cin >> dinero;
    if (dinero>=10)
    {
        Billetes(dinero);
    }
    if (dinero>=0) 
    {
        Monedas(dinero);
    }
    return 0;
}

void Billetes(int&(dinero)){
    int billetes_200=0,billetes_100=0,billetes_50=0,billetes_20=0,billetes_10=0;
    while (dinero>=10)
    {
        if (dinero>=200)
        {
            billetes_200=dinero/200;
            dinero= dinero % 200;
        }
        else if (dinero>=100)
        {
            billetes_100=dinero/100;
            dinero= dinero % 100;
        }
        else if (dinero>=50)
        {
            billetes_50=dinero/50;
            dinero= dinero % 50;
        }
        else if (dinero>=20)
        {
            billetes_20=dinero/20;
            dinero= dinero % 20;
        }
        else if (dinero>=10)
        {
            billetes_10=dinero/10;
            dinero= dinero % 10;
        }
    }
    if (billetes_200>0)
        cout << "Cantidad de billetes de 200: "<< billetes_200<<endl;
    if (billetes_100>0)
        cout << "Cantidad de billetes de 100: "<< billetes_100<<endl;
    if (billetes_50>0)
        cout << "Cantidad de billetes de 50: "<< billetes_50<<endl;
    if (billetes_20>0)
        cout << "Cantidad de billetes de 20: "<< billetes_20<<endl;
    if (billetes_10>0)
        cout << "Cantidad de billetes de 10: "<< billetes_10<<endl;
}
void Monedas(int& dinero){
    int moneda_5=0,moneda_2=0,moneda_1=0;
    while (dinero>0)
    {
        if (dinero>=5)
        {
            moneda_5=dinero/5;
            dinero=dinero%5;
        }
        else if (dinero>=2)
        {
            moneda_2=dinero/2;
            dinero=dinero%2;
        }
        else if (dinero>=1)
        {
            moneda_1=dinero/1;
            dinero=dinero%1;
        }
    }
    if (moneda_5>0)
        cout << "Cantidad de monedas de 5: "<<moneda_5<<endl;
    if (moneda_2>0)
        cout << "Cantidad de monedas de 2: "<<moneda_2<<endl;
    if (moneda_1>0)
        cout << "Cantidad de monedas de 1: "<<moneda_1<<endl;
}