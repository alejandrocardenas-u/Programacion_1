// Materia: Programación I, Paralelo 4
// Autor: Alejandro Cardenas Huayta
// Carnet: 13343885
// Carrera del estudiante: Ingeniería Biomedica
// Fecha creación: 04/10/2025
// Número de ejercicio: 5

#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector <string> comparacion(vector<string>cadena_1,vector<string>cadena_2);
int main(){
    system ("cls");
    string cliente;
    int numero_clientes_empresa_1, numero_clientes_empresa_2;
    vector <string> empresa_1;
    vector <string> empresa_2;
    vector <string> clientes_repetidos;
    cout << "Ingrese el numero de clientes de la empresa 1: ";
    cin >> numero_clientes_empresa_1;
    cin.ignore(); //para pedir un string despues de un numero
    for (int i = 0; i < numero_clientes_empresa_1; i++)
    {
        cout << "Ingrese el cliente "<<i<<" de la empresa 1: ";
        getline(cin,cliente);
        empresa_1.push_back(cliente);
    }
    cout << "Ingrese el numero de clientes de la empresa 2: ";
    cin >> numero_clientes_empresa_2;
    cin.ignore();
    for (int i = 0; i < numero_clientes_empresa_2; i++)
    {
        cout << "Ingrese el cliente "<<i<<" de la empresa 2: ";
        getline(cin,cliente);
        empresa_2.push_back(cliente);
    }
    clientes_repetidos=comparacion(empresa_1,empresa_2);
    cout << "Clientes Repetidos: "<<endl;
    for (int i = 0; i < clientes_repetidos.size(); i++)
    {
        cout << clientes_repetidos[i]<<" ";
    }
    
    return 0;
}

vector <string> comparacion(vector<string>cadena_1,vector<string>cadena_2){
    vector <string> clientes_repetidos;
    string cliente;
    for (int i = 0; i < cadena_1.size(); i++)
    {
        for (int j = 0; j < cadena_2.size(); j++)
        {
            if (cadena_1[i]==cadena_2[j])
            {
                cliente=cadena_1[i];
                clientes_repetidos.push_back(cliente);
            }
        }
    }
    return clientes_repetidos;
}