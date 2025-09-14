// Materia: Programación I, Paralelo 4
// Autor: Alejandro Cardenas Huayta
// Carnet: 13343885
// Carrera del estudiante: Ingenieria Biomedica
// Fecha creación: 13/09/2025
// Número de ejercicio: 5

#include <iostream>
using namespace std;

float Calculo_salario(int & horas_trabajadas);
int main(){
    int horas_trabajadas=0;
    float Salario=0.000;
    system ("cls");
    cout << "ingrese la cantidad de horas trabajadas: ";
    cin >> horas_trabajadas;
    Salario=Calculo_salario(horas_trabajadas);
    cout << "Salario= "<<Salario<<" Bs."<<endl;
    if (horas_trabajadas>0)
    {
        cout<<"bonificacion = "<< horas_trabajadas* (2750/(48*4))/2.000 << " Bs."<<endl;
    }
    
    return 0;
}
float Calculo_salario(int & horas_trabajadas){
    float Salario=0.000,tarifa_hora=(2750.000/(48*4)); // en bolivia el salario minimo son 2750 Bs, y la carga horaria semanas son 48
    int Jornada=48*4;
    if (horas_trabajadas>=Jornada)
    {
        Salario=Jornada*tarifa_hora;
    }
    else
    {
        Salario=horas_trabajadas*tarifa_hora;
    }
    horas_trabajadas=horas_trabajadas-Jornada;
    return Salario;
}