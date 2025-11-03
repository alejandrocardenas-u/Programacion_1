// Materia: Programación I, Paralelo 4
// Autor: ALejandro Cardenas Huayta
// Carnet: 13343885
// Carrera del estudiante: Ingenieria Biomedica
// Fecha creación: 2/11/2025
// Número de ejercicio: 10

#include <iostream>

using namespace std;

int MCD(int a,int b);

struct s_fraccion
{
    int numerador;
    int denominador;
};

int main()
{
    int maximo_comun_divisor;
    s_fraccion fraccion;
    s_fraccion fraccion_simplificada;
    system ("cls");
    cout << "Ingrese el numerador de la fraccion: ";
    cin >> fraccion.numerador;
    cout << "Ingrese el denominador de la fraccion: ";
    cin >> fraccion.denominador;
    maximo_comun_divisor=MCD(fraccion.numerador,fraccion.denominador);
    fraccion_simplificada.numerador=fraccion.numerador/maximo_comun_divisor;
    fraccion_simplificada.denominador=fraccion.denominador/maximo_comun_divisor;
    cout << "fraccion simplificada: "<<endl;
    cout << fraccion_simplificada.numerador<<"/"<<fraccion_simplificada.denominador;
    return 0;
}


int MCD(int a,int b)
{
    if (b==0)
    {
        return a;
    }
    return MCD(b, a%b); // a toma el mayor y b toma el residuo
}