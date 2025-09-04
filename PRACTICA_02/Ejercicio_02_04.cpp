/* Materia: Programación I, Paralelo 4
Autor: Alejandro Cardenas Huayta
Carnet: 13343885 L.P.
Carrera del estudiante: Ingeniería Biomedica
Fecha creación: 03/09/2025
Número de ejercicio: 4 */
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
    system ("cls");
    int maximo=50, minimo=0, numero_pensado, Numero_de_intento=1, numero_ingresado;
    srand(time(0));
    numero_pensado = rand()%51;
    cout<< "Estoy pensando un numero entre 0 y 50"<<endl;
    while ((Numero_de_intento<=5) && (Numero_de_intento>0)){ // si se acaba el numero de intentos o adivina el numero, sale del ciclo
        cout << "Intento "<< Numero_de_intento<< endl;
        Numero_de_intento+=1;
        cout << "ingrese un numero: ";
        cin >> numero_ingresado;
        if (numero_ingresado != numero_pensado){
             if (numero_ingresado <= numero_pensado ){ //actualizacion de rangon max y min
                minimo = numero_ingresado;
             }
             else{
                maximo =numero_ingresado;}
            cout<< "El numero esta entre: "<<minimo<<" y "<< maximo<<endl;
        }
        else{
            cout << "Felicitaciones... Adivinaste el numero. Intento ="<< Numero_de_intento-1;
            Numero_de_intento=-1;//condicion para salir del bucle
        }
        }
        return 0;
    }
