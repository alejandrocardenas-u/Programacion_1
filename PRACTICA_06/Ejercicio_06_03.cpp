// Materia: Programación I, Paralelo 4
// Autor: Alejandro Cardenas Huayta
// Carnet: 13343885
// Carrera del estudiante: Ingeniería Biomedica
// Fecha creación: 04/10/2025
// Número de ejercicio: 3

#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int Aleatorio(int minimo, int maximo);
int main()
{
    system ("cls");
    srand(time(0));
    int n;
    vector<string>Nombres ={"Alejandro","Carlos","Jose","Juan","Rodrigo","Eduardo","Samuel","Luis","Gonzalo","Hugo"};
    vector<string>Apellidos={"Cardenas","Palenque","Carvajal","Canaviri","Paz","Del Castillo","Medina","Tejada","Sanchez","Suarez"};
    vector<int>Edad;
    for (int i = 0; i < 10; i++)
    {
        Edad.push_back(Aleatorio(18,99));
    }
    cout << "Ingrese n: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cout << "Iteracion "<<i<<":\t";
        cout << Nombres[Aleatorio(1,10)-1]<<" "<< Apellidos[Aleatorio(1,10)-1]<<" "<<Edad[Aleatorio(1,10)-1]<<endl;// Aleatorio(1,10)-1 para que coincida con el rango(0,9 de los vectoress)
    }
    return 0;
}

int Aleatorio(int minimo, int maximo){
    int aleatorio=(rand()%(maximo-minimo+1))+minimo;
    return aleatorio;
}