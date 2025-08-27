/** Materia: Programación I, Paralelo 4
Autor: Alejandro Cardenas Huayta
Carnet: 13343885 L.P.
Carrera del estudiante: Ingeniería Biomedica
Fecha creación: 27/08/2025
Número de ejercicio: 20**/

#include <iostream>

using namespace std;
int numero=0, digitos=0;
int main (){
    cout << "ingrese un numero entero: ";
    cin >> numero;
    while (numero>0){
        if (numero % 10 >= 0){ // el modulo (%) saca el residuo de la division entera, se pone (>=) para que cuente los 0 en numeros como 1000
            digitos = digitos +1;
        }
        numero = int(numero/10);
    }
    cout<<"digitos = "<< digitos;
    return 0;
}