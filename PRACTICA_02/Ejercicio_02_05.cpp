/* Materia: Programación I, Paralelo 4
Autor: Alejandro Cardenas Huayta
Carnet: 13343885 L.P.
Carrera del estudiante: Ingeniería Biomedica
Fecha creación: 03/09/2025
Número de ejercicio: 5 */

#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main (){
    system ("cls");
    int N,numero,mayor=0,menor=0;
    double promedio=0, Sumatoria=0;
    srand (time(0));
    cout<< "Ingrese N: ";
    cin >> N;
    for (int i = 1; i < N+1; i++)
    {
        numero=rand();
        Sumatoria +=numero;
        if (mayor ==0) //si es la primera entrada se asigna el numero a ambos, minimo y maximo para compararlos despues
        {
            mayor =numero;
            menor=numero;
        }
        else
        {
            if (numero>mayor){
                mayor=numero;}
            if (numero<menor){
                menor=numero;}
            }
    }
    promedio=Sumatoria/N;
    cout << "Sumatoria= "<<Sumatoria<<endl;
    cout << "Mayor= "<< mayor<<endl;
    cout << "Menor= "<<menor<<endl;
    cout << "Promedio= "<<promedio<<endl;
    return 0;
}