// Materia: Programación I, Paralelo 4
// Autor: Alejandro Cardenas Huayta.
// Fecha creación: 09/09/2025
// Número de ejercicio: 6
#include <iostream>
using namespace std;

int validar_mes();
int main (){
    int año,mes;
    char mes_literal;
    system ("chcp 65001");
    system ("cls");
    cout << "Ingrese el año: ";
    cin >> año;
    mes=validar_mes();
    system ("cls");
    if (año%4==0 && mes==2) // si el año es bisiesto es divisible entre 4, por lo tanto febrero tendra 21 dias
    {
        cout << "Año bisiesto"<<endl;
        cout << "Dias=29";
    }
    else{
        switch (mes)
        {
            case 1:
                cout<< "Dias= 31";
                break;
            case 2:
                cout << "Dias= 28";
                break;
            case 3:
                cout<< "Dias= 31";
                break;
            case 4:
                cout << "Dias= 30";
                break;
            case 5:
                cout<< "Dias= 31";
                break;
            case 6:
                cout << "Dias= 30";
                break;
            case 7:
                cout<< "Dias= 31";
                break;
            case 8:
                cout << "Dias= 31";
                break;
            case 9:
                cout<< "Dias= 30";
                break;
            case 10:
                cout << "Dias= 31";
                break;
            case 11:
                cout<< "Dias= 30";
                break;
            case 12:
                cout << "Dias= 31";
                break;
        }
    }
    return 0;
}

int validar_mes(){
    int mes;
    do
    {
        cout << "Ingrese un mes de manera numeral"<<endl;
        cout << "1. Enero"<<endl;
        cout << "2. Febrero"<<endl;
        cout << "3. Marzo"<<endl;
        cout << "4. Abril"<<endl;
        cout << "5. Mayo"<<endl;
        cout << "6. Junio"<<endl;
        cout << "7. Julio"<<endl;
        cout << "8. Agosto"<<endl;
        cout << "9. Septiembre"<<endl;
        cout << "10. Octubre"<<endl;
        cout << "11. Noviembre"<<endl;
        cout << "12. Diciembre"<<endl;
        cout << "Ingrese un valor:";
        cin >> mes;
        if (not(mes>=0 && mes <=12))
        {
            cout << "Ingrese Un valor valido"<<endl;
            system ("Pause");
            system ("cls");
        }
        
    } while (not(mes>=0 && mes <=12));
    
    return mes;
}