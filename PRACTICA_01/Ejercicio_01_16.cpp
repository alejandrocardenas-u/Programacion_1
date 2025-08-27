/** Materia: Programación I, Paralelo 4
Autor: Alejandro Cardenas Huayta
Carnet: 13343885 L.P.
Carrera del estudiante: Ingeniería Biomedica
Fecha creación: 26/08/2025
Número de ejercicio: 16**/

#include <iostream>

using namespace std;
int numero=0 ;
int cantidad_divisores= 0;
int divisor =1;
int main (){
    cout << "ingresa un numero: ";
    cin >> numero;
    while (numero >= divisor){
        if ((numero % divisor) == 0){ //si la division entre el numero y divisor da cero, el numero se divide exactamente por el divisor
            cantidad_divisores = cantidad_divisores+1;
        }
        divisor=divisor+1;

    }
    if (cantidad_divisores == 2) // si la cantidad de divisores es dos significa que el numero es primo, pues solo se divide por si mismo y por uno
        cout << "el numero es primo";
    else
        cout << "el numero no es primo";
    return 0;
}

