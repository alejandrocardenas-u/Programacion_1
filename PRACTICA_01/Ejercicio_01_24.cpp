/** Materia: Programación I, Paralelo 4
Autor: Alejandro Cardenas Huayta
Carnet: 13343885 L.P.
Carrera del estudiante: Ingeniería Biomedica
Fecha creación: 27/08/2025
Número de ejercicio: 24**/

#include <iostream>

using namespace std;

int opcion, flag=1;
int main (){
    while (flag == 1){ //el codigo se repite hasta que el usuario ponga 0
        do
        {
            cout << "1. Opcion 1"<<endl;
            cout << "2. Opcion 2"<<endl;
            cout << "3. Opcion 3"<<endl;
            cout << "0. Salir"<<endl;
            cout << "Seleccione una opcion: ";
            cin >>opcion;
        } while (not(opcion>=0 && opcion <=3)); //validacion para que el numero este entre 0 y 3
        switch (opcion){
            case 1: 
                cout << "Usted a elegido la opcion 1"<< endl<< endl; break;
            case 2: 
                cout << "Usted a elegido la opcion 2"<< endl<< endl; break;
            case 3: 
                cout << "Usted a elegido la opcion 3"<< endl<< endl; break; //doble endl para que haya diferencia entre el mensaje y el menu
            case 0:
                flag = 0; break; // si el usuario elige 0, se baja flag y  se sale del codigo
        }
        
    }
    cout << "usted a salido";
    return 0;
}