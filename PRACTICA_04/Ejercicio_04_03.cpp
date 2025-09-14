// Materia: Programación I, Paralelo 4
// Autor: Alejandro Cardenas Huayta
// Carnet: 13343885
// Carrera del estudiante: Ingenieria Biomedica
// Fecha creación: 13/09/2025
// Número de ejercicio: 3

#include <iostream>
using namespace std;

void Modificar_Valores(int primer_numero,int&segundo_numero); // se usa void para que no haya return
int main(){
    int primer_numero, segundo_numero;
    system ("cls");
    cout << "Ingrese el primer numero: ";
    cin >> primer_numero;
    cout << "Ingrese el segundo numero: ";
    cin >> segundo_numero;
    Modificar_Valores(primer_numero,segundo_numero);
    cout << "Segundo numero= "<<segundo_numero;
    return 0;
}

void Modificar_Valores(int primer_numero,int&segundo_numero){ 
    primer_numero=primer_numero*2;
    segundo_numero+=10;
    cout <<"primer numero= "<< primer_numero<<endl;
}