/** Materia: Programación I, Paralelo 4
Autor: Alejandro Cardenas Huayta
Carnet: 13343885 L.P.
Carrera del estudiante: Ingeniería Biomedica
Fecha creación: 27/08/2025
Número de ejercicio: 19**/

#include <iostream>

using namespace std;
int numero;
int main (){
    cout << "ingrese un numero: ";
    cin >> numero;
    cout << "Tabla del: " << numero <<endl;
    for (int i = 1; i < 11; i++) // para que la tabla se cree automaticamente desde 1 hasta el 10
    {
        cout << numero << " x " << i << " = " << i*numero << endl;
    }
    
    return 0;
}