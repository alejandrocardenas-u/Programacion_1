/** Materia: Programación I, Paralelo 4
Autor: Alejandro Cardenas Huayta
Carnet: 13343885 L.P.
Carrera del estudiante: Ingeniería Biomedica
Fecha creación: 26/08/2025
Número de ejercicio: 11**/

#include <iostream>

using namespace std;

int mes;
int main(){
    cout <<"Ingrese un numero del 1 al 12";
    cin >> mes;
    switch (mes){ //para simplificar usamos swtich, y no tener que hacer 12 if
        case 1: cout<<"enero";break;
        case 2: cout<<"febrero";break;
        case 3: cout<<"marzo";break;
        case 4: cout<<"abril";break;
        case 5: cout<<"mayo";break;
        case 6: cout<<"junio";break;
        case 7: cout<<"julio";break;
        case 8: cout<<"agosto";break;
        case 9: cout<<"septiembre";break;
        case 10: cout<<"octubre";break;
        case 11: cout<<"noviembre";break;
        case 12: cout<<"diciembre";break;
        default: cout<<"Mes invalido";break;
    }
    return 0;
}