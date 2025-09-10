// Materia: Programación I, Paralelo 4
// Autor: Alejandro Cardenas Huayta.
// Fecha creación: 09/09/2025
// Número de ejercicio: 7
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int edad_aleatoria();
int altura_aleatoria();
int main (){
    int N,edad,altura,cantidad_mayor_18=0,cantidad_altura_175=0;
    double edad_acumulada=0.000,altura_acumulada=0.000;
    srand(time(0));
    system ("cls");
    cout << "Ingrese N: ";
    cin >> N;
    for (int i = 1; i < N+1; i++)
    {
        edad=edad_aleatoria();
        altura=altura_aleatoria();
        edad_acumulada+=edad; //sumatoria de las edades
        altura_acumulada+=altura; //sumatoria de las alturas
        if (edad>=18)
        {
            cantidad_mayor_18+=1;
        }
        if (altura>=175)
        {
            cantidad_altura_175+=1;
        }
    }
    cout << "edad media: "<<edad_acumulada/N<<endl;
    cout << "altura media: "<<altura_acumulada/N<<endl;
    cout << "Cantidad de alumnos mayores de 18: "<< cantidad_mayor_18<<endl;
    cout << "Cantidad de alumnos que miden mas de 175 cm: " << cantidad_altura_175;
    return 0;
}
int edad_aleatoria(){
    int edad;
    int rango_max=35, rango_min=1;
    edad=rand()%(rango_max-rango_min+1) +rango_min;
    return edad;
}
int altura_aleatoria(){
    int altura;
    int rango_max=200, rango_min=120;
    altura=rand()%(rango_max-rango_min+1) +rango_min;
    return altura;
}
