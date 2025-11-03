// Materia: Programación I, Paralelo 4
// Autor: ALejandro Cardenas Huayta
// Carnet: 13343885
// Carrera del estudiante: Ingenieria Biomedica
// Fecha creación: 30/10/2025
// Número de ejercicio: 2

#include <iostream>

using namespace std;

struct s_atleta
{
    char Nombre[30];
    char pais[20];
    int edad;
    int mejor_tiempo;
};

int main()
{
    system ("cls");
    s_atleta atleta;
    s_atleta mejor_atleta;
    int N;
    cout << "Ingrese el numero de atletas: ";
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin.ignore();
        cout << "Ingrese el nombre del atleta: ";
        cin.getline(atleta.Nombre,30);
        cout << "Ingrese el pais de origen del atleta: ";
        cin.getline(atleta.pais,30);
        cout << "Ingrese la edad del atleta: ";
        cin >>atleta.edad;
        cout << "Ingrese el tiempo en segundos del atleta: ";
        cin >> atleta.mejor_tiempo;
        if ((mejor_atleta.mejor_tiempo==0) || (atleta.mejor_tiempo > mejor_atleta.mejor_tiempo))
        {
            mejor_atleta=atleta;
        }
    }
    cout << "\nMEJOR ATLETA"<<endl;
    cout << "Nombre: "<<mejor_atleta.Nombre<<endl;
    cout << "Pais: "<<mejor_atleta.pais<<endl;
    cout << "Edad: "<<mejor_atleta.edad<<endl;
    cout << "Mejor tiempo [s]: "<<mejor_atleta.mejor_tiempo<<endl;
    return 0;
}
