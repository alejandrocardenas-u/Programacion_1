// Materia: Programación I, Paralelo 4
// Autor: Alejandro Cardenas Huayta
// Carnet: 13343885
// Carrera del estudiante: Ingenieria Biomedica
// Fecha creación: 17/10/2025
// Número de ejercicio: 5

#include <iostream>
#include <ctime>
#include <cstdlib>
#include <vector>

using namespace std;

void Llenar_numeros(vector <int>& vector);  //enviar el vector por referencia
int Aleatorio(int minimo, int maximo);
void Mostrar_vector(vector<int>vector);
int Suma(vector <int> vector, int elementos);

int main()
{
    srand(time(0));
    system ("cls");
    vector <int> numeros ;
    Llenar_numeros(numeros);
    Mostrar_vector(numeros);
    cout << "\nLa suma de los elementos del vector es: "<<Suma(numeros, numeros.size())<<endl;
    return 0;
}

void Llenar_numeros(vector <int> & vector){
    for (int i = 0; i < Aleatorio(2,10); i++)
    {
        vector.push_back(Aleatorio(Aleatorio(1,50),Aleatorio(51,100)));
    }
}

int Aleatorio(int minimo, int maximo){
    return (rand()%(maximo-minimo+1))+minimo;
}

void Mostrar_vector(vector<int>vector){
    for (int i = 0; i < vector.size(); i++)
    {
        cout << vector[i]<<" ";
    }
}

int Suma(vector <int> vector, int elementos){
    if (elementos==1)
    {
        return vector[0];
    }
    return vector[elementos-1]+Suma(vector,elementos-1);
}