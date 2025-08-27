/** Materia: Programación I, Paralelo 4
Autor: Alejandro Cardenas Huayta
Carnet: 13343885 L.P.
Carrera del estudiante: Ingeniería Biomedica
Fecha creación: 27/08/2025
Número de ejercicio: 17**/

#include <iostream>

using namespace std;
int variable1, variable2, suma_divisores1, suma_divisores2, numero;
int suma_divisores(int numero) {
    int suma=0;
    for (int i = 1; i < numero; i++) //el divisor se toma como i, i va desde 1 hasta el valor del numero evaluando los posibles divisores enteros
    {
        if (numero%i == 0){
            suma = suma + i;
        }
    }
    return suma;
}

int main (){
    cout << "ingrese el primer numero: ";
    cin >> variable1;
    cout << "ingrese el segundo numero: ";
    cin >> variable2;
    suma_divisores1 = suma_divisores(variable1);
    suma_divisores2 = suma_divisores(variable2);
    if (suma_divisores1==variable2 && suma_divisores2==variable1){ //el concepto de numeros amigos, son aquellos cuya suma de divisores enteros de uno sea igual al otro
        cout << "los numeros "<<variable1<<" y "<<variable2<< " son amigos.";
    }
    else 
        cout << "los numeros "<<variable1<<" y "<<variable2<< " no son amigos.";    
    return 0;
}