/** Materia: Programación I, Paralelo 4
Autor: Alejandro Cardenas Huayta
Carnet: 13343885 L.P.
Carrera del estudiante: Ingeniería Biomedica
Fecha creación: 27/08/2025
Número de ejercicio: 22**/

#include <iostream>

using namespace std;

int numero,multiplo;
int main(){
    cout << "ingresar el numero: ";
    cin >> numero;
    cout << "ingresar el multiplo: ";
    cin >> multiplo;
    
    if ((numero % multiplo)== 0){ // si el residuo de la division entera de dos numeros es 0, los numeros son multiplos
        cout<<numero<< " es multiplo de: "<< multiplo;
    }
    else 
        cout<<numero<< " no es multiplo de: "<< multiplo;
    return 0;
}