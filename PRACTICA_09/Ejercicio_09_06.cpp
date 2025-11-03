// Materia: Programación I, Paralelo 4
// Autor: ALejandro Cardenas Huayta
// Carnet: 13343885
// Carrera del estudiante: Ingenieria Biomedica
// Fecha creación: 2/11/2025
// Número de ejercicio: 6

#include <iostream>
#include <vector>
#include <cstring>

using namespace std;

struct s_Empleado
{
    char Nombre_completo[50];
    int CI;
    float sueldo;
    int antiguedad;
};
void Llenar_vector(vector<s_Empleado>&Empleados,int n);
s_Empleado Ingresar_datos();
int Contar_sueldos_mayores(vector<s_Empleado>&Empleados,float sueldo);
float Sacar_promedio_antiguedad(vector<s_Empleado>&Empleados);

int main()
{
    int n,cantidad_sueldos_mayores=0;
    float sueldo=0,promedio_antiguedad=0;
    vector<s_Empleado> Empleados;
    system ("cls");
    cout << "Ingrese el numero de empleados: ";
    cin >> n;
    cin.ignore();
    Llenar_vector(Empleados,n);
    cout << "\nIngrese el sueldo a comparar: ";
    cin >> sueldo;
    cantidad_sueldos_mayores=Contar_sueldos_mayores(Empleados,sueldo);
    cout << "\nLa cantidad de empleados con sueldo mayor a: "<<sueldo<<"es: "<<cantidad_sueldos_mayores<<endl;
    promedio_antiguedad=Sacar_promedio_antiguedad(Empleados);
    cout << "El promedio de la antiguedad de los empleados es: "<<promedio_antiguedad<<endl;
    return 0;
}

void Llenar_vector(vector<s_Empleado>&Empleados,int n)
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
    cout << "Ingrese el Nombre completo del empleado: ";
    cin.getline(Empleado.Nombre_completo,50);
    cout << "Ingrese el CI del empleado: ";
    cin >> Empleado.CI;
    cout << "Ingrese el sueldo del empleado: ";
    cin >> Empleado.sueldo;
    cout << "Ingrese la antiguedad del empleado: ";
    cin >> Empleado.antiguedad;
    return Empleado;
}

int Contar_sueldos_mayores(vector<s_Empleado>&Empleados,float sueldo)
{
    int contador=0;
    for (int i = 0; i < Empleados.size(); i++)
    {
        if (sueldo<=Empleados[i].sueldo)
        {
            contador++;
        }
    }
    return contador;
}

float Sacar_promedio_antiguedad(vector<s_Empleado>&Empleados)
{
    float promedio=0.00000;
    for (int i = 0; i < Empleados.size(); i++)
    {
        promedio+=Empleados[i].antiguedad;
    }
    return promedio/(Empleados.size());
}