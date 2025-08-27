/** Materia: Programación I, Paralelo 4
Autor: Alejandro Cardenas Huayta
Carnet: 13343885 L.P.
Carrera del estudiante: Ingeniería Biomedica
Fecha creación: 26/08/2025
Número de ejercicio: 10**/

#include <iostream>

using namespace std;

int nota;
int main (){
    cout << "ingrese la nota del estudiante: ";
    cin >> nota;
    if (nota>=51)
    {
        if (nota<60)
            cout<<"C";
        else if (nota >=60 && nota<70)
            cout << "C+";
        else if (nota >=70 && nota<80)
            cout << "B";
        else if (nota >=80 && nota<90)
            cout << "B+";
        else if (nota >=90 && nota <95)
            cout << "A";
        else if (nota >=95 && nota <100)
            cout << "A+";}
    else
        cout << "reprobado";
    
return 0;
}