// Materia: Programación I, Paralelo 4
// Autor: Alejandro Cardenas Huayta
// Carnet: 13343885
// Carrera del estudiante: Ingeniería Biomedica
// Fecha creación: 04/10/2025
// Número de ejercicio: 4

#include <iostream>
#include <vector>

using namespace std;

vector<int> rotar_cadena(int k,vector <int> cadena);
int main(){
    system ("cls");
    int N=0,elemento=0,k=0;
    vector <int> cadena;
    vector <int> nueva_cadena;
    cout << "Ingrese el numero de elementos de la cadena: ";
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cout << "Ingrese el elemento "<<i+1<<" : ";
        cin >> elemento;
        cadena.push_back(elemento);
    }
    cout << "Ingrese la cantidad de posiciones que el vector sera desplazado: ";
    cin >> k;
    nueva_cadena=rotar_cadena(k,cadena);
    for (int i = 0; i < nueva_cadena.size(); i++)
    {
        cout << nueva_cadena[i]<<" ";
    }
    
    return 0;
}

vector<int> rotar_cadena(int k,vector <int> cadena){ // recibir y devolver vector
    for (int j = 0; j < k; j++) // para desplazar k veces la cadena
    {
        int ultimo=cadena[cadena.size()-1];
        for (int i = cadena.size()-1; i > 0; i--)
        {
            cadena[i]=cadena[i-1];// desplazar cada elemento a la derecha una vez
        }
        cadena[0]=ultimo;
    }
    return cadena;
}