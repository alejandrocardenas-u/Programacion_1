// Materia: Programación I, Paralelo 4
// Autor: ALejandro Cardenas Huayta
// Carnet: 13343885
// Carrera del estudiante: Ingenieria Biomedica
// Fecha creación: 30/10/2025
// Número de ejercicio: 3

#include <iostream>
#include <vector>

struct s_alumnos
{
    int cedula;
    char nombre[30];
    char apellidos[30];
    int edad;
    char profesion[30];
    char lugar_nacimiento[30];
    char direccion[30];
    int telefono;
};

using namespace std;

void Llenar_datos(vector <s_alumnos>& Alumnos, int n);
s_alumnos Ingresar_datos();
void Mostrar_Datos(vector <s_alumnos> Alumnos,int n);

int main()
{
    system ("cls");
    vector <s_alumnos> Alumnos;
    int n;
    cout << "Ingrese la cantidad de alumnos: ";
    cin >> n;
    Llenar_datos(Alumnos,n);
    Mostrar_Datos(Alumnos,n);
    return 0;
}

void Llenar_datos(vector <s_alumnos>& Alumnos, int n)
{
    s_alumnos Alumno;
    for (int i = 0; i < n; i++)
    {
        cout << "Registro N°: "<<i+1<<endl;
        Alumno = Ingresar_datos();
        Alumnos.push_back(Alumno);
    }
}

s_alumnos Ingresar_datos()
{
    s_alumnos Alumno;
    cout << "Ingrese la cedula de identidad: ";
    cin >> Alumno.cedula;
    cin.ignore();
    cout << "Ingrese los Nombres del estudiante: ";
    cin.getline(Alumno.nombre,30);
    cout << "Ingrese los Apellidos del estudiante: ";
    cin.getline(Alumno.apellidos,30);
    cout << "Ingrese la edad del estudiante: ";
    cin >> Alumno.edad;
    cin.ignore();
    cout << "Ingrese la profesion: ";
    cin.getline(Alumno.profesion,30);
    cout << "Ingrese el lugar de nacimiento: ";
    cin.getline(Alumno.lugar_nacimiento,30);
    cout << "Ingrese la direccion: ";
    cin.getline(Alumno.direccion,30);
    cout << "Ingrese el numero de telefono: ";
    cin >> Alumno.telefono;
    return Alumno;
}

void Mostrar_Datos(vector <s_alumnos> Alumnos,int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "-----------Registro "<<i+1<<"-----------"<<endl;
        cout << "Nombres: "<<Alumnos[i].nombre<<endl;
        cout << "Apellidos: "<<Alumnos[i].apellidos<<endl;
        cout << "Edad: "<<Alumnos[i].edad<<endl;
        cout << "Profesion: "<<Alumnos[i].profesion<<endl;
        cout << "Lugar de nacimiento: "<<Alumnos[i].lugar_nacimiento<<endl;
        cout << "Numero de telefono: "<<Alumnos[i].telefono<<endl;
        cout << "---------------------------------"<<endl;
    }
    
}