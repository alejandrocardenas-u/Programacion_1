// Materia: Programación I, Paralelo 4
// Autor: Alejandro Cardenas Huayta
// Carnet: 13343885
// Carrera del estudiante: Ingeniería Biomedica
// Fecha creación: 04/10/2025
// Número de ejercicio: 6

#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>

using namespace std;

vector <int> vector_aleatorio(int N);
int main()
{
    srand(time(0));
    double Reprobados=0.0000,Regulares=0.0000,Buenos=0.0000,Excelentes=0.0000;
    int N=0;
    vector <int> notas;
    vector <int> notas_agrupadas;
    cout << "Ingrese el numero de calificaciones: ";
    cin >> N;
    notas=vector_aleatorio(N);//rellenar un vector con nnumeros aleatorios;
    for (int i = 0; i < notas.size(); i++)
    {
        if (notas[i]<60)
            Reprobados++;
        else if(notas[i]>=60 && notas[i]<80)
            Regulares++;
        else if (notas[i]>=80 && notas[i] <90)
            Buenos++;
        else if (notas[i] >=90 && notas[i]<=100)
            Excelentes++;
    }
    cout<< "Reprobados: "<<(Reprobados*100.00)/notas.size() <<" % "<<endl;
    cout<< "Regulares: "<<(Regulares*100.00)/notas.size() <<" % "<<endl;
    cout<< "Buenos: "<<(Buenos*100.00)/notas.size() <<" % "<<endl;
    cout<< "Excelentes: "<<(Excelentes*100.00)/notas.size() <<" % "<<endl;
    return 0;
}

vector <int> vector_aleatorio(int N){
    vector<int>notas_aleatorias;
    int Aleatorio=0;
    for (int i = 0; i < N; i++)
    {
        Aleatorio=(rand()%(100+1));//rand()% (maximo-minimo+1)+minimo;
        notas_aleatorias.push_back(Aleatorio);
    }
    return notas_aleatorias;
}



