// Materia: Programación I, Paralelo 4
// Autor: Alejandro Cardenas Huayta.
// Fecha creación: 09/09/2025
// Número de ejercicio: 9
#include <iostream>
using namespace std;

int calculo_tiempo(int(minutos_trabajados));
int main (){
    system ("cls");
    int minutos_trabajados;
    int tiempo_trabajado;
    cout << "Ingrese la cantidad que ha trabajado (en minutos): ";
    cin >> minutos_trabajados;
    tiempo_trabajado=calculo_tiempo(minutos_trabajados);
    if (tiempo_trabajado < 0) // si el tiempo trabajado es negativo, quiere decir que el trabajador no cumplio sus 8 horas
    {
        cout << "El trabajador debe " << tiempo_trabajado << " minutos a la empresa"<<endl;
    }
    else if(tiempo_trabajado >0)
    {
        cout << "El trabajador ha hecho "<< tiempo_trabajado << " minutos extra"<<endl;
    }
    else 
        cout << "El trabajador ha cumplido la jornada laboral"<<endl;
    return 0;
}
int calculo_tiempo(int(minutos_trabajados)){
    int saldo=0;
    int jornada=8*60; //para trabajar en minutos se convierte la carga horaria de 8 horas a minutos
    saldo=minutos_trabajados-jornada; 
    return saldo;
}