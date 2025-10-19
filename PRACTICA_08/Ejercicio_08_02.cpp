// Materia: Programación I, Paralelo 4
// Autor: Alejandro Cardenas Huayta
// Carnet: 13343885
// Carrera del estudiante: Ingenieria Biomedica
// Fecha creación: 17/10/2025
// Número de ejercicio: 2

#include <iostream>

using namespace std;

int potencia(int a,int n);
int main()
{
    int a,n;
    cout << "Ingrese la base: ";
    cin >> a;
    cout << "Ingrese el exponente: ";
    cin >> n;
    cout << a<<" elevado a: "<<n<<" = "<< potencia(a,n);
    return 0;
}

int potencia(int a,int n){
    if (n==1)
    {
        return a; 
    }
    return a*potencia(a,n-1); //se multiplicará el numero n veces
}