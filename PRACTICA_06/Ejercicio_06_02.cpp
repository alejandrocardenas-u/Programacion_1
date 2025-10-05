// Materia: Programación I, Paralelo 4
// Autor: Alejandro Cardenas Huayta
// Carnet: 13343885
// Carrera del estudiante: Ingeniería Biomedica
// Fecha creación: 03/10/2025
// Número de ejercicio: 2

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int menu();
int main()
{
    vector<float>toneladas={998,876.5,786.670,636.143,135.567,109.412};
    vector <string>Minerales={"SN","SB","AU","PT","AG","CU"};
    int opcion=0;
    vector <string>Minerales_ordenados;
    vector <float>toneladas_ordenado;
    system ("cls");
    do
    {
        opcion=menu();
        if (opcion!=0)
        {
            cout << "Minerales \t Produccion"<<endl;
            cout << Minerales[opcion-1]<<"\t\t"<<toneladas[opcion-1]<<endl;// opcion-1 para que coincida con la posicion del vector solicitada
        }
        system("pause");
    } while (opcion != 0);
    cout << "Minerales \t Produccion"<<endl;
    for (int i = 0; i < toneladas.size(); i++)
    {
        cout << Minerales[i]<<"\t\t"<<toneladas[i]<<endl;
    }
    return 0;
}
int menu(){
    int opcion=0;
    do
    {
        cout << "MINERALES"<<endl;
        cout << "========="<<endl;
        cout << "1. SN"<<endl;
        cout << "2. SB"<<endl;
        cout << "3. AU"<<endl;
        cout << "4. PT"<<endl;
        cout << "5. AG"<<endl;
        cout << "6. CU"<<endl;
        cout << "0. Salir"<<endl;
        cout << "Elija una opcion: ";
        cin >> opcion;
    } while (not (opcion>=0 && opcion <=6));
    return opcion;
}