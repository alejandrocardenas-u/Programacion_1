// Materia: Programación I, Paralelo 4
// Autor: Alejandro Cardenas Huayta.
// Fecha creación: 09/09/2025
// Número de ejercicio: 3
#include <iostream>
using namespace std;
int dar_vuelta(int (numero));
int main (){
    int numero, numero_al_reves;
    system ("cls");
    cout << "Ingrese un numero: ";
    cin >> numero;
    numero_al_reves=dar_vuelta(numero);
    if (numero==numero_al_reves)
    {
        cout << numero << " Es capicua";
    }
    else
    {
        cout << numero << " No es capicua";
    }
    return 0;
}

int dar_vuelta(int (numero)){
    int nuevo_numero=0;
    while (numero>0)
    {
        nuevo_numero=nuevo_numero*10+numero%10; //concatenacion de numeros
        numero/=10;
    }
    return nuevo_numero;
}