/** Materia: Programación I, Paralelo 4
Autor: Alejandro Cardenas Huayta
Carnet: 13343885 L.P.
Carrera del estudiante: Ingeniería Biomedica
Fecha creación: 26/08/2025
Número de ejercicio: 9**/

#include <iostream>

using namespace std;

int edad;
int main(){
    cout<<"ingrese se edad: ";
    cin>>edad;
    if (edad <=12)
        cout<<"Ninio";
    else if ((edad>12) && (edad<=18))
        cout << "Adolecente";
    else if (edad >18 && edad<60)
        cout << "Mayor de edad";
    else if (edad >60)
        cout << "Adulto mayor";
}
