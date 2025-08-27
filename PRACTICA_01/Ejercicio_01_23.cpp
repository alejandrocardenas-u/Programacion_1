/** Materia: Programación I, Paralelo 4
Autor: Alejandro Cardenas Huayta
Carnet: 13343885 L.P.
Carrera del estudiante: Ingeniería Biomedica
Fecha creación: 27/08/2025
Número de ejercicio: 23**/

#include <iostream>

using namespace std;
int numero, numero_al_reves;
int main (){
    cout << "ingrese un numero de varios digitos: ";
    cin >> numero;
    while (numero > 0){
        numero_al_reves = numero_al_reves*10 + numero % 10; // para concatenar numeros el primero se multiplica por 10 y se suma el segundo
        numero=numero/10;
    }
    cout << numero_al_reves;
    return 0;
}
