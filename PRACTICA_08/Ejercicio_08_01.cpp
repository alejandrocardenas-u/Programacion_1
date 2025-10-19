// Materia: Programación I, Paralelo 4
// Autor: Alejandro Cardenas Huayta
// Carnet: 13343885
// Carrera del estudiante: Ingenieria Biomedica
// Fecha creación: 17/10/2025
// Número de ejercicio: 1

#include <iostream>

using namespace std;

int suma(int numero);

int main()
{
    system("cls");
    int numero=0;
    cout << "Ingrese un numero: ";
    cin >> numero;
    cout << "Suma= "<<suma(numero);
    return 0;
}

//funcion recursiva 
int suma(int numero){
    if (numero == 0 )//caso base, cuando no hay mas numeros restantes
    {
        return 0;
    }
    return numero % 10 + suma(numero/10); 
}