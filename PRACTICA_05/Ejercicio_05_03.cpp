// Materia: Programación I, Paralelo 4
// Autor: Alejandro Cardenas Huayta
// Carnet: 13343885
// Carrera del estudiante: Ingeniería Biomedica
// Fecha creación: 01/10/2025
// Número de ejercicio: 3

#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int Sumatoria(vector <int> Calficaciones);
int main()
{
    system ("cls");
    int n,calificacion;
    float Promedio=0.00,suma=0,desviacion_individual=0.0000,varianza=0.0000;
    vector<int>Calificaciones;
    vector<float>Desviacion;
    cout << "Ingrese el numero de calificaciones: ";
    cin >>n;
    for (int i = 0; i < n; i++)
    {
        cout << "Ingrese la calificacion "<<i+1<<" : " ;
        cin >> calificacion;
        Calificaciones.push_back(calificacion); //agregar elementos a un vector no definido
    }
    suma=Sumatoria(Calificaciones);
    Promedio=suma/n;
    cout << "Promedio: "<<Promedio<<endl;
    for (int i = 0; i < Calificaciones.size(); i++)
    {
        desviacion_individual=Calificaciones[i]-Promedio;
        varianza+=pow(desviacion_individual,2);
        Desviacion.push_back(desviacion_individual);
    }
    cout << "Calificaciones \t Desviacion estandar"<<endl;
    for (int i = 0; i < Calificaciones.size(); i++)
    {
        cout << "\t"<<Calificaciones[i]<<" \t \t "<<Desviacion[i]<<endl;
    }
    cout << "Varianza= "<< varianza/n;
    return 0;
}

int Sumatoria(vector <int> Calficaciones){
    int suma=0;
    for (int i = 0; i < Calficaciones.size(); i++)
    {
        suma+=Calficaciones[i];
    }
    return suma;
}
