// Materia: Programación I, Paralelo 4
// Autor: Alejandro Cardenas Huayta
// Carnet: 13343885
// Carrera del estudiante:Ingenieria Biomedica
// Fecha creación: 3/12/2025
// Número de ejercicio: 4

#include <iostream>
#include <fstream>
#include <cstring>
#include <cstdio>

using namespace std;

struct structEstudiantes
{
    int carnet;
    char nombres[30];
    char apellidos[30];
    char materia[30];
    int paralelo;
};

struct structNotas
{
    int carnet;
    char materia[30];
    int paralelo;
    float nota;
};

void Menu();
void Adicionar_estudiante(string archivo_estudiantes);
void Listado_estudiantes(string archivo_estudiantes, string archivo_notas);
void Eliminar_estudiante(string archivo_estudiantes);
void Adicionar_notas(string archivo_estudiantes, string archivo_notas);

int main()
{
    Menu();
    return 0;
}

void Menu()
{
    int opcion;
    string archivo_estudiantes = "ESTUDIANTES.BIN";
    string archivo_notas = "NOTAS.txt";
    do
    {
        do
        {
            system("cls");
            cout << "\t-----MENU NOTAS UCB-----"<<endl;
            cout << "\t1. Adicionar Estudiante"<<endl;
            cout << "\t2. Listado de Estudiantes Habilitados"<<endl;
            cout << "\t3. Eliminar una Estudiante"<<endl;
            cout << "\t4. Adicionar notas habilitacion"<<endl;
            cout << "\t0. Salir"<<endl;
            cout << "\tIngrese una opcion: ";
            cin >> opcion;
            cin.ignore();
            if (!(opcion >=0 && opcion <=4))
            {
                cout << "\tOpcion no valida"<<endl;
                system ("pause");
            }
        } while (!(opcion >=0 && opcion <=4));
        switch (opcion)
        {
        case 1: Adicionar_estudiante(archivo_estudiantes);break;
        case 2: Listado_estudiantes(archivo_estudiantes, archivo_notas);break;
        case 3: Eliminar_estudiante(archivo_estudiantes);break;
        case 4: Adicionar_notas(archivo_estudiantes, archivo_notas);break;
        default:break;
        }
    } while (opcion !=0);
}

void Adicionar_estudiante(string archivo_estudiantes)
{
    structEstudiantes Estudiante;
    system ("cls");
    cout << "Ingrese el carnet identidad: "<<endl;
    cin >> Estudiante.carnet;
    cin.ignore();
    cout << "Ingrese los nombres: "<<endl;
    cin.getline(Estudiante.nombres,30);
    cout << "Ingrese los apellidos: "<<endl;
    cin.getline(Estudiante.apellidos,30);
    cout << "Ingrese la materia: "<<endl;
    cin.getline(Estudiante.materia,30);
    cout << "Ingrese el paralelo: "<<endl;
    cin >> Estudiante.paralelo;
    ofstream archivo;
    archivo.open(archivo_estudiantes, ios::binary | ios::app);
    if (archivo.good())
    {
        archivo.write((char*)&Estudiante, sizeof(structEstudiantes));
    }
    archivo.close();
}

void Listado_estudiantes(string archivo_estudiantes, string archivo_notas)
{
    system("cls");
    ifstream archivo_est;
    archivo_est.open(archivo_estudiantes, ios::binary);
    ifstream archivo_not;
    archivo_not.open(archivo_notas);
    structEstudiantes Estudiante;
    structNotas Nota;
    int carnet, paralelo;
    char materia[30];
    float nota;
    float suma_total = 0;
    int contador_est = 0;
    
    cout << "CARNET\tNOMBRES\tAPELLIDOS\tMATERIA\tPARALELO\tNOTA HABILITACION\tESTADO"<<endl;
    cout << "------------------------------------------------------------------------------------------------"<<endl;
    
    while (archivo_est.read((char*)&Estudiante, sizeof(structEstudiantes)))
    {
        archivo_not.clear();
        archivo_not.seekg(0);
        float suma_notas = 0;
        int contador_notas = 0;
        bool todas_mayor_60 = true;
        
        while (archivo_not >> carnet)
        {
            archivo_not.ignore();
            archivo_not.getline(materia, 30, ';');
            archivo_not >> paralelo;
            archivo_not.ignore();
            archivo_not >> nota;
            archivo_not.ignore();
            
            if (carnet == Estudiante.carnet && 
                strcmp(materia, Estudiante.materia) == 0 && 
                paralelo == Estudiante.paralelo)
            {
                suma_notas += nota;
                contador_notas++;
                if (nota < 60)
                {
                    todas_mayor_60 = false;
                }
            }
        }
        
        if (contador_notas > 0)
        {
            float promedio = suma_notas / contador_notas;
            suma_total += promedio;
            contador_est++;
            
            cout << Estudiante.carnet << "\t" << Estudiante.nombres << "\t" 
                 << Estudiante.apellidos << "\t" << Estudiante.materia << "\t"
                 << Estudiante.paralelo << "\t\t" << promedio << "\t\t\t";
            
            if (todas_mayor_60 && promedio >= 60)
            {
                cout << "HABILITADO" << endl;
            }
            else
            {
                cout << "NO HABILITADO, TIENE UNA NOTA MENOR A 60" << endl;
            }
        }
        else
        {
            cout << Estudiante.carnet << "\t" << Estudiante.nombres << "\t" 
                 << Estudiante.apellidos << "\t" << Estudiante.materia << "\t"
                 << Estudiante.paralelo << "\t\t" << "SIN NOTAS" << "\t\t"
                 << "SIN NOTAS" << endl;
        }
    }
    
    cout << "------------------------------------------------------------------------------------------------"<<endl;
    if (contador_est > 0)
    {
        float promedio_total = suma_total / contador_est;
        cout << "PROMEDIO GENERAL DE NOTAS DE HABILITACION: " << promedio_total << endl;
    }
    
    system("pause");
    archivo_est.close();
    archivo_not.close();
}

void Eliminar_estudiante(string archivo_estudiantes)
{
    structEstudiantes Estudiante;
    ifstream archivo_original;
    archivo_original.open(archivo_estudiantes, ios::binary);
    ofstream archivo_temporal;
    archivo_temporal.open("temp.bin", ios::binary);
    int carnet_buscar;
    cout << "Ingrese el carnet del estudiante a eliminar: ";
    cin >> carnet_buscar;
    while (archivo_original.read((char*)&Estudiante, sizeof(structEstudiantes)))
    {
        if (Estudiante.carnet == carnet_buscar)
        {
            cout << "Estudiante encontrado. REGISTRO ELIMINADO:"<<endl;
            cout << "Carnet: "<<Estudiante.carnet<<endl;
            cout << "Nombres: "<<Estudiante.nombres<<endl;
            cout << "Apellidos: "<<Estudiante.apellidos<<endl;
            cout << "Materia: "<<Estudiante.materia<<endl;
            cout << "Paralelo: "<<Estudiante.paralelo<<endl;
        }
        else
        {
            archivo_temporal.write((char*)&Estudiante, sizeof(structEstudiantes));
        }
    }
    archivo_original.close();
    archivo_temporal.close();
    remove(archivo_estudiantes.c_str());
    rename("temp.bin", archivo_estudiantes.c_str());
    system("pause");
}

void Adicionar_notas(string archivo_estudiantes, string archivo_notas)
{
    system("cls");
    structNotas Nota;
    cout << "Ingrese el carnet del estudiante: "<<endl;
    cin >> Nota.carnet;
    cin.ignore();
    cout << "Ingrese la materia: "<<endl;
    cin.getline(Nota.materia,30);
    cout << "Ingrese el paralelo: "<<endl;
    cin >> Nota.paralelo;
    cout << "Ingrese la nota: "<<endl;
    cin >> Nota.nota;
    ofstream archivo;
    archivo.open(archivo_notas, ios::app);
    archivo << Nota.carnet << "; " << Nota.materia << "; " << Nota.paralelo << "; " << Nota.nota << endl;
    archivo.close();
    system("pause");
}