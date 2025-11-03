// Materia: Programación I, Paralelo 4
// Autor: ALejandro Cardenas Huayta
// Carnet: 13343885
// Carrera del estudiante: Ingenieria Biomedica
// Fecha creación: 2/11/2025
// Número de ejercicio: 4

#include <iostream>
#include <vector>

using namespace std;

struct s_Empleado
{
    char Nombre[30];
    char Genero[20];
    float salario;
};

void Llenar_vector (vector <s_Empleado>& Empleados, int n);
s_Empleado Ingresar_datos();
void Mostrar_vector (vector<s_Empleado>Empleados,int n);

int main()
{
    system ("cls");
    int n;
    cout <<"Ingrese el numero de trabajadores de la empresa: ";
    cin >> n;
    vector <s_Empleado> Empleados;
    Llenar_vector (Empleados,n);
    Mostrar_vector (Empleados,n);
    return 0;
}

void Llenar_vector (vector <s_Empleado>& Empleados, int n)
{
    s_Empleado Empleado;
    for (int i = 0; i < n; i++)
    {
        cout << "Registro N°: "<<i+1<<endl;
        Empleado = Ingresar_datos();
        Empleados.push_back(Empleado);
    }
}

s_Empleado Ingresar_datos()
{
    s_Empleado Empleado;
    cin.ignore();
    cout << "Ingrese los Nombres del empleado: ";
    cin.getline(Empleado.Nombre,30);
    cout << "Ingrese el Genero del empleado: ";
    cin.getline(Empleado.Genero,30);
    cout << "Ingrese el salario del empleado: ";
    cin >> Empleado.salario;
    return Empleado;
}

void Mostrar_vector (vector<s_Empleado>Empleados,int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "-----------Registro "<<i+1<<"-----------"<<endl;
        cout << "Nombres: "<<Empleados[i].Nombre<<endl;
        cout << "Genero: "<<Empleados[i].Genero<<endl;
        cout << "salario: "<<Empleados[i].salario<<endl;
    }
}