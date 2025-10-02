// Materia: Programación I, Paralelo 4
// Autor: Alejandro Cardenas Huayta
// Carnet: 13343885
// Carrera del estudiante: Ingeniería Biomedica
// Fecha creación: 01/10/2025
// Número de ejercicio: 1

#include <iostream>
#include <ctime>
#include <cstdlib>
#include <vector>

using namespace std;

void Lista_voltajes();
void Lista_temperaturas();
void Lista_caracteres();
void Lista_anios();
void Lista_velocidades();
void Lista_distancias();
float Aleatorio_Decimales(float min, float max);
int main()
{
    int n;
    srand(time(0));
    system ("chcp 65001");
    do
    {
        do
        {
            system ("cls");
            cout << "=====OPCIONES====="<<endl;
            cout << "1. Lista de Voltajes"<<endl;
            cout << "2. Lista de Temperaturas"<<endl;
            cout << "3. Lista de Caracteres"<<endl;
            cout << "4. Lista de Años"<<endl;
            cout << "5. Lista de Velocidades"<<endl;
            cout << "6. Lista de Distancias"<<endl;
            cout << "0. Salir"<<endl;
            cout << "Seleccione una opción: "<<endl;
            cin >> n;
            if (not(n>=0 && n<=6))
            {
                cout << "Ingrese una opción valida"<<endl;
                system("pause");
            }
        } while (not(n>=0 && n<=6));
        switch (n)
        {
        case 1:
            Lista_voltajes(); break;
        case 2:
            Lista_temperaturas(); break;
        case 3:
            Lista_caracteres(); break;
        case 4:
            Lista_anios(); break;
        case 5:
            Lista_velocidades(); break;
        case 6:
            Lista_distancias(); break;
        default:
            break;
        }
    } while (n!=0);
    cout << "Usted a Salido"<<endl;
    return 0;
}

float Aleatorio_Decimales(float min, float max){
    float Aleatorio=0.00;
    int entero=0; 
    float decimal =0.00;
    entero = ( rand() % int(max-min+1))+min;
    decimal = ((rand() % (99))+1)/100.00;
    Aleatorio= entero+decimal;
    return Aleatorio;
}

int Aleatorio_entero(int min, int max){
    int aleatorio=0;
    aleatorio=( rand() % (max-min+1))+min;
    return aleatorio;
}
void Lista_voltajes(){
    vector <float> Voltajes(100);
    for (int i = 0; i < Voltajes.size(); i++)
    {
        Voltajes [i]=Aleatorio_Decimales(20.00,220.00);
        cout << "Elemento "<<i+1<<": "<<Voltajes[i]<<" V."<<endl;
    }
    system("pause");
}

void Lista_temperaturas(){
    vector <float> Temperaturas(50);
    for (int i = 0; i < Temperaturas.size(); i++)
    {
        Temperaturas[i]=Aleatorio_Decimales(0.00,100.00);
        cout << "Elemento "<<i+1<< ": "<< Temperaturas[i]<<"° "<<endl;
    }
    system ("pause");
}


void Lista_caracteres(){
    int n;
    vector <char> caracteres(30);
    for (int i = 0; i < caracteres.size(); i++)
    {
        n=Aleatorio_entero(1,3);
        switch (n)
        {
        case 1:
            caracteres[i]=Aleatorio_entero(48,57);break; //numero codigo ASCII
        case 2:
            caracteres[i]=Aleatorio_entero(65,90);break; //mayusculas codigo ASCII
        case 3:
            caracteres[i]=Aleatorio_entero(97,122);break; //minusculas codigo ASCII
        }
        cout << "Elemento "<<i+1<< ": "<< caracteres[i]<<endl;
    }
    system("pause");
}
void Lista_anios(){
    vector <int> anios(100);
    for (int i = 0; i < anios.size(); i++)
    {
        anios[i]=Aleatorio_entero(1990, 2025);
        cout << "Elemento "<<i+1<< ": "<< anios[i]<<endl;
    }
    system("pause");
}
void Lista_velocidades(){
    vector <float> Velocidades(32);
    for (int i = 0; i < Velocidades.size(); i++)
    {
        Velocidades[i]=Aleatorio_Decimales(10.00,300.00);
        cout << "Elemento "<<i+1<< ": "<< Velocidades[i]<<" [m/s] "<<endl;
    }
    system("Pause");
}
void Lista_distancias(){
    vector <float> Distancias(1000);
    for (int i = 0; i < Distancias.size(); i++)
    {
        Distancias[i]=Aleatorio_Decimales(10.00,300.00);
        cout << "Elemento "<<i+1<< ": "<< Distancias[i]<<" [m] "<<endl;
    }
    system("Pause");
}
