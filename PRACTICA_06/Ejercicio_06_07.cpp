// Materia: Programación I, Paralelo 4
// Autor: Alejandro Cardenas Huayta
// Carnet: 13343885
// Carrera del estudiante: Ingeniería Biomedica
// Fecha creación: 04/10/2025
// Número de ejercicio: 7

#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>

using namespace std;

int Aleatorio(int minimo, int maximo);
int main()
{
    system("cls");
    vector <int> valores;
    vector<int> contador(26);
    int N, valor_escala=0,digito=0 ;
    cout << "Ingrese N: ";
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        valores.push_back(Aleatorio(0,255));
    }
    for (int i = 0; i < valores.size(); i++)
    {
        digito=valores[i]/10;// se toma los primeros digitos para hacer la listas
        contador[digito]++;
    }
    for (int i = 0; i < contador.size(); i++)
    {
        cout << i*10<<" - "<<i*10+9+((i/25)*(-4))<<" = "<<contador[i]<<endl;// el inciio es i*10, el final es el inicio +9, pero para el final deberia ir hasta 255, por lo que si el numero es divisible entre 25, es el ultimo y se le resta 4para ir hasta 255
    }
    return 0;
}

int Aleatorio(int minimo,int maximo){
    int Aleatorio=rand()%(maximo-minimo+1)+minimo;
    return Aleatorio;
}