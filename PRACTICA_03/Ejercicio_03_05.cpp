// Materia: Programación I, Paralelo 4
// Autor: Alejandro Cardenas Huayta.
// Fecha creación: 09/09/2025
// Número de ejercicio: 5
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

double promedio_ponderado(int(nota1),int(nota2),int(nota3),int(nota4));
int main (){
    int nota1,nota2,nota3,nota4;
    double promedio;
    srand (time(0));
    system ("cls");
    nota1=rand()%100 +1;
    nota2=rand()%100 +1;
    nota3=rand()%100 +1;
    nota4=rand()%100 +1;
    promedio=promedio_ponderado(nota1,nota2,nota3,nota4);
    cout << "El promedio ponderado es de: "<<promedio;
    return 0;
}
double promedio_ponderado(int(nota1),int(nota2),int(nota3),int(nota4)){
    double promedio;
    promedio=(nota1*10+nota2*20+nota3*30+nota4*40)/100; //el promedio ponderado son las notas multiplicadas por su peso, divididas por la suma de las ponderaciones
    return promedio;
}