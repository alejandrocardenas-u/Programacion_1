// Materia: Programación I, Paralelo 4
// Autor: ALejandro Cardenas Huayta
// Carnet: 13343885
// Carrera del estudiante: Ingenieria Biomedica
// Fecha creación: 2/11/2025
// Número de ejercicio: 5

#include <iostream>
#include <vector>
#include <cstring>

using namespace std;

struct s_pelicula
{
    char titulo[30];
    char director [30];
    int duracion;
    int anio_estreno;
    char genero[30];
};

void Llenar_vector(vector <s_pelicula>& Peliculas,int n);
s_pelicula Ingresar_datos();
void Mostrar_vector(vector <s_pelicula> Peliculas,int n);
void Mostrar_peliculas_director(vector<s_pelicula> Peliculas);

int main()
{
    int n;
    vector <s_pelicula> Peliculas;
    system ("cls");
    cout << "Ingrese el numero de peliculas: ";
    cin >> n;
    cin.ignore();
    Llenar_vector(Peliculas,n);
    Mostrar_vector(Peliculas,n);
    Mostrar_peliculas_director(Peliculas);
    return 0;
}

void Llenar_vector(vector <s_pelicula>& Peliculas,int n)
{
    s_pelicula Pelicula;
    for (int i = 0; i < n; i++)
    {
        cout << "Registro N°: "<<i+1<<endl;
        Pelicula = Ingresar_datos();
        Peliculas.push_back(Pelicula);
    }
}

s_pelicula Ingresar_datos()
{
    s_pelicula Pelicula;
    cin.ignore();
    cout << "Ingrese el titulo de la pelicula: ";
    cin.getline(Pelicula.titulo,30);
    cout << "Ingrese el director de la pelicula: ";
    cin.getline(Pelicula.director,30);
    cout << "Ingrese la duracion de la pelicula: ";
    cin >> Pelicula.duracion;
    cin.ignore();
    cout << "Ingrese el genero de la pelicula: ";
    cin.getline(Pelicula.genero,30);
    cout << "Ingrese el año de estreno: ";
    cin >> Pelicula.anio_estreno;
    return Pelicula;
}

void Mostrar_vector(vector <s_pelicula> Peliculas,int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "-----------Registro "<<i+1<<"-----------"<<endl;
        cout << "Titulo: "<<Peliculas[i].titulo<<endl;
        cout << "Director: "<<Peliculas[i].director<<endl;
        cout << "Duracion: "<<Peliculas[i].duracion<<endl;
        cout << "Genero: "<<Peliculas[i].genero<<endl;
        cout << "Año de estreno: "<<Peliculas[i].anio_estreno<<endl;
        cout << "---------------------------------"<<endl;
    }
}

void Mostrar_peliculas_director(vector<s_pelicula> Peliculas)
{
    char director[30];
    cout << "Ingrese el director para ver sus peliculas: ";
    cin.getline(director,30);
    for (int i = 0; i < Peliculas.size(); i++)
    {
        if (strcmp(Peliculas[i].director,director)==0)
        {
            cout << "-----------Registro "<<i+1<<"-----------"<<endl;
            cout << "Titulo: "<<Peliculas[i].titulo<<endl;
            cout << "Director: "<<Peliculas[i].director<<endl;
            cout << "Duracion: "<<Peliculas[i].duracion<<endl;
            cout << "Genero: "<<Peliculas[i].genero<<endl;
            cout << "Año de estreno: "<<Peliculas[i].anio_estreno<<endl;
            cout << "---------------------------------"<<endl;
        }
    }    
}