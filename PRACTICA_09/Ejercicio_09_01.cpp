// Materia: Programación I, Paralelo 4
// Autor: ALejandro Cardenas Huayta
// Carnet: 13343885
// Carrera del estudiante: Ingenieria Biomedica
// Fecha creación: 30/10/2025
// Número de ejercicio: 1

#include <iostream>

using namespace std;

struct Registro_libros
{
    char Titulo[30];
    char Autor[30];
    int anio_publicacion;
    bool Disponible;
};

int main()
{
    system ("chcp 65001");
    system ("cls");
    int opcion;
    Registro_libros Libro;
    cout << "REGISTRO\n";
    cout << "Ingrese el titulo del libro: ";
    cin.getline(Libro.Titulo,30);
    cout << "Ingrese el Autor del libro: "; 
    cin.getline(Libro.Autor,30);
    cout << "Ingrese el año de publicacion del libro: ";
    cin >> Libro.anio_publicacion;
    cout << "¿El libro esta disponible? ";
    cout << "\n1.Si";
    cout << "\n2.No";
    cout << "\nIngrese una opcion: ";
    cin >> opcion;
    switch (opcion)
    {
    case 1: Libro.Disponible=true;break;
    case 2: Libro.Disponible=false;break;
    }
    cout << "\nVerificacion de Registro: "<<endl;
    cout << "Titulo: "<<Libro.Titulo<<endl;
    cout << "Autor: "<<Libro.Autor<<endl;
    cout << "Año de publicacion: "<<Libro.anio_publicacion<<endl;
    (Libro.Disponible)?cout << "Disponible":cout << "No Disponible"<<endl;
    return 0;
}
