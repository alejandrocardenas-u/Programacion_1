/** Materia: Programación I, Paralelo 4
Autor: Alejandro Cardenas Huayta
Carnet: 13343885 L.P.
Carrera del estudiante: Ingeniería Biomedica
Fecha creación: 27/08/2025
Número de ejercicio: 25**/

#include <iostream>

using namespace std;

int flag=1,numero;
char  respuesta;
int main (){
    do
    {
        cout << "ingrese un numero: ";
        cin >> numero;
        cout << "Tabla del: "<< numero;
        for (int i=1; i<=10;i++){
            cout << numero<<" x "<<i<<" = "<< numero*i<<endl;
        }
        cout << "¿Desea calcular otra tabla? (s/n): ";
        cin >> respuesta;
        if (respuesta == 'n'){ // las comillas simples sacan el char de la letra y se puede comparar con otro char, las comillas dobles son para mensajes largos (creo)
            flag=0;
        }
    } while (flag==1); // si la respuesta es n, sale del ciclo
    
    return 0;
}