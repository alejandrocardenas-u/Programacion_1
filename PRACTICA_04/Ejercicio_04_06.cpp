// Materia: Programación I, Paralelo 4
// Autor: Alejandro Cardenas Huayta
// Carnet: 13343885
// Carrera del estudiante: Ingenieria Biomedica
// Fecha creación: 13/09/2025
// Número de ejercicio: 6

#include <iostream>
using namespace std;

bool condicion_primo(int numero);
int main(){
    int numero=0;
    system ("cls");
    cout << "Ingrese un numero: "<<endl;
    cin >> numero;
    if (condicion_primo(numero)==true)
    {
        cout << "La suma de los digitos del numero es un numero primo";
    }
    else
    {
        cout << "La suma de los digitos del numero NO es un numero primo";
    }
    return 0;
}

bool condicion_primo(int(numero)){
    int digito=0,suma=0,suma_divisores=0;
    while (numero>0)
    {
        digito=numero%10;
        suma+=digito;
        numero/=10;}
    for (int i = 1; i <=suma; i++)
    {
        if (suma%i==0)
        {
            suma_divisores+=1;
        }
    }
    if (suma_divisores==2) // la suma_divisores se refiere a la suma de divisores de la suma de los digitos
    {
        return true;
    }
    else
    {
        return false;
    }    
}
