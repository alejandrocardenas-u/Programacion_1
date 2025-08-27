/** Materia: Programación I, Paralelo 4
Autor: Alejandro Cardenas Huayta
Carnet: 13343885 L.P.
Carrera del estudiante: Ingeniería Biomedica
Fecha creación: 26/08/2025
Número de ejercicio: 12**/

#include <iostream>

using namespace std;
int numero;
int main(){
    do
    {
        cout << "ingresar un numero entre 1 y 5 : ";
        cin >> numero;
    } while ( not(numero >= 1 && numero <=5)); // si el numero esta dentro del rango la sentencia sera V, con el not se niega esto y sale F, saliendo del ciclo
    
    return 0;
}