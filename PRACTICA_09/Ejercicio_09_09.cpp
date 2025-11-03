// Materia: Programación I, Paralelo 4
// Autor: ALejandro Cardenas Huayta
// Carnet: 13343885
// Carrera del estudiante: Ingenieria Biomedica
// Fecha creación: 2/11/2025
// Número de ejercicio: 9

#include <iostream>
#include <vector>
#include <cstring>

using namespace std;

struct s_calificaciones
{
    float T1;
    float T2;
    float T3;
    float T4;
    float EF;
};

void Llenar_vector(vector<s_calificaciones>& Calificaciones_alumnos,int n);
s_calificaciones Ingresar_datos();
void Mostrar_calificaciones(vector<s_calificaciones>Calificaciones_alumnos);

int main()
{
    int n;
    vector <s_calificaciones> Calificaciones_alumnos;
    system("cls");
    cout << "Ingrese la cantidad de alumnos: ";
    cin >> n;
    Llenar_vector(Calificaciones_alumnos,n);
    Mostrar_calificaciones(Calificaciones_alumnos);
    return 0;
}

void Llenar_vector(vector<s_calificaciones>& Calificaciones_alumnos,int n)
{
    s_calificaciones Alumno;
    for (int i = 0; i < n; i++)
    {
        cout << "Registro N°: "<<i+1<<endl;
        Alumno = Ingresar_datos();
        Calificaciones_alumnos.push_back(Alumno);
    }
}

s_calificaciones Ingresar_datos()
{
    s_calificaciones calificacion;
    cout << "Ingrese la nota del examen parcial 1: ";
    cin >> calificacion.T1;
    cout << "Ingrese la nota del examen parcial 2: ";
    cin >> calificacion.T2;
    cout << "Ingrese la nota del examen parcial 3: ";
    cin >> calificacion.T3;
    cout << "Ingrese la nota del examen parcial 4: ";
    cin >> calificacion.T4;
    cout << "Ingrese la nota del examen final: ";
    cin >> calificacion.EF;
    return calificacion;
}

void Mostrar_calificaciones(vector<s_calificaciones>Calificaciones_alumnos)
{
    float NF=0,NP=0;
    for (int i = 0; i < Calificaciones_alumnos.size(); i++)
    {
        NP=(Calificaciones_alumnos[i].T1+Calificaciones_alumnos[i].T2+Calificaciones_alumnos[i].T3+Calificaciones_alumnos[i].T4)/4.00;
        NF=0.70*(NP)+0.30*Calificaciones_alumnos[i].EF;
        cout << "La nota final del alumno: "<<i+1<<" es: "<<NF<<endl;
    }
}