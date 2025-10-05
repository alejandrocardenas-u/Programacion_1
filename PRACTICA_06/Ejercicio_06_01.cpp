// Materia: Programación I, Paralelo 4
// Autor: Alejandro Cardenas Huayta
// Carnet: 13343885
// Carrera del estudiante: Ingeniería Biomedica
// Fecha creación: 03/10/2025
// Número de ejercicio: 1

#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

void Desviacion_tipica(vector <int> edades);
int main()
{
    int edad=0;
    system ("cls");
    vector <int> edades;
    do
    {
        cout << "Ingrese una edad: ";
        cin >> edad;
        if (edad>=0)
        {
            edades.push_back(edad);
        }
    } while (edad>=0);
    for (int i = 0; i < edades.size(); i++)
    {
        cout << "Edad "<<i+1<<" = "<<edades[i]<<endl;
    }
    Desviacion_tipica(edades);
    return 0;
}

void Desviacion_tipica(vector <int> edades){
    float sumatoria=0.0000,media=0.0000,desviacion_estandar=0.000,varianza=0.0000;
    for (int Elemento: edades)
    {
        sumatoria+=Elemento;
    }
    cout << "sumatoria= "<<sumatoria<<endl;
    media=sumatoria/edades.size();
    for (int Elemento:edades)
    {
        desviacion_estandar+=pow((Elemento-media),2); //calculo de cada elemento de la desviacion al cuadrado
        // cout << "Desviacion estandar: "<<desviacion_estandar<<endl;
    }
    varianza=sqrt(desviacion_estandar/edades.size());// raiz de la desviacion estandar = varianza
    cout << "Desviacion tipica= "<<varianza;
}

