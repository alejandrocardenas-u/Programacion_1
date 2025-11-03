// Materia: Programación I, Paralelo 4
// Autor: ALejandro Cardenas Huayta
// Carnet: 13343885
// Carrera del estudiante: Ingenieria Biomedica
// Fecha creación: 3/11/2025
// Número de ejercicio: 8

#include <iostream>
#include <vector>
#include <cstring>

using namespace std;

struct s_atleta
{
    char nombre[50];
    char departamento[30];
    char deporte[30];
    int oro;
    int plata;
    int bronce;
};

void Llenar_vector(vector <s_atleta>& Atletas,int n);
s_atleta Ingresar_datos();
void Mostrar_medallero(vector<s_atleta>Atletas);

int main()
{
    int n;
    vector <s_atleta> Atletas;
    system ("cls");
    cout << "Ingrese el numero de atletas: ";
    cin >> n;
    Llenar_vector(Atletas,n);
    Mostrar_medallero(Atletas);
    return 0;
}


void Llenar_vector(vector<s_atleta>&Atletas,int n)
{
    s_atleta Atleta;
    for (int i = 0; i < n; i++)
    {
        cout << "Registro N°: "<<i+1<<endl;
        Atleta = Ingresar_datos();
        Atletas.push_back(Atleta);
    }
}

s_atleta Ingresar_datos()
{
    s_atleta Atleta;
    cin.ignore();
    cout << "Ingrese el Nombre del atleta: ";
    cin.getline(Atleta.nombre,30);
    cout << "Ingrese el departamento del atleta: ";
    cin.getline(Atleta.departamento,30);
    cout << "Ingrese el deporte del atleta: ";
    cin.getline(Atleta.deporte,30);
    cout << "Ingrese cuantas medallas de oro tiene el atleta: ";
    cin >> Atleta.oro;
    cout << "Ingrese cuantas medallas de plata tiene el atleta: ";
    cin >> Atleta.plata;
    cout << "Ingrese cuantas medallas de bronce tiene el atleta: ";
    cin >> Atleta.bronce;
    return Atleta;
}

void Mostrar_medallero(vector<s_atleta>Atletas)
{
    vector <int> oro(9,0);
    vector <int> plata(9,0);
    vector <int> bronce(9,0);
    vector <string> departamentos {"La Paz","Cochabamba","Santa Cruz","Oruro","Pando","Potosi","Tarija","Chuquisaca","Beni"};
    for (int i = 0; i < Atletas.size(); i++)
    {
        for (int j = 0; j < 9; j++)
        {
            if (strcmp(Atletas[i].departamento,departamentos[j].c_str())==0)
            {
                oro[j]+=Atletas[i].oro;
                plata[j]+=Atletas[i].plata;
                bronce[j]+=Atletas[i].bronce;
            }
        }
    }
    for (int i = 0; i < departamentos.size(); i++)
    {
        cout << departamentos[i] << "  ";
        cout << "Oro: " << oro[i] << "  ";
        cout << "Plata: " << plata[i] << "  ";
        cout << "Bronce: " << bronce[i] << endl;
    }
}