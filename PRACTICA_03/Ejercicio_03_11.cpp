// Materia: Programación I, Paralelo 4
// Autor: Alejandro Cardenas Huayta.
// Fecha creación: 10/09/2025
// Número de ejercicio: 11
#include <iostream>
using namespace std;

void Menu();
void Retirar_dinero(int &dinero);
void Depositar_dinero(int &dinero);
int main(){
    int opcion=0,dinero=1000 ;
    do
    {
        system ("chcp 65001");
        do
        {
            Menu();
            cin >> opcion;
            if (not(opcion >=0 && opcion <=3))
            {
                cout << "\tPor favor Ingrese una opción Valida"<<endl;
                system ("pause");
            }
        } while (not(opcion >=0 && opcion <=4));
        
        switch (opcion)
        {
        case 1:
            Retirar_dinero(dinero);
            break;
        case 2:
            Depositar_dinero(dinero);break;
        case 3:
            system ("cls");
            cout<< "Su saldo es de: "<<dinero<<endl;
            system ("pause");
        default:
            break;
        }
    } while (opcion !=0 );
    return 0;
}
void Menu(){
    system("cls");
    cout << "\t =====Menú====="<<endl;
    cout << "\t1. Retirar Dinero"<<endl;
    cout << "\t2. Depositar Dinero"<<endl;
    cout << "\t3. Revisar Saldo"<<endl;
    cout << "\t0. Salir"<<endl;
    cout << "\tIngrese una opcion: ";
}

void Retirar_dinero(int&dinero){
    int Retiro=0;
    system ("cls");
    do
    {
        cout << "\tIngrese la cantidad de dinero que desea Retirar: ";
        cin >> Retiro;
        if (Retiro > dinero)
            cout << "\tSaldo Insuficiente, Intente Nuevamente"<<endl;
        if (not(Retiro%10==0))
            cout << "\tMonto Invalido, Intente Nuevamente"<<endl;
    } while (not(Retiro%10==0 && Retiro <= dinero)); //validar que sea multiplo de 10, y menor al dinero saldo
    dinero-=Retiro;
    cout << "\tUsted a Retirado: "<<Retiro<< " Su saldo es de: "<<dinero<<endl;
    system ("Pause");
}

void Depositar_dinero(int&dinero){
    int deposito=0;
    system ("cls");
    do
    {
        cout << "\t Ingrese la cantidad de dinero que desea depositar: ";
        cin >>deposito;
        if (not(deposito >=0 && deposito %10==0))
            cout << "Monto invalido, Intente Nuevamente.";
    } while (not(deposito >=0 && deposito %10==0));
    dinero+=deposito;
    cout<< "Ha depositado: "<<deposito<< " Su saldo es: "<< dinero<<endl;
    system ("pause");
}