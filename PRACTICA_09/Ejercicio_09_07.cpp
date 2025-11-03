// Materia: Programación I, Paralelo 4
// Autor: ALejandro Cardenas Huayta
// Carnet: 13343885
// Carrera del estudiante: Ingenieria Biomedica
// Fecha creación: 2/11/2025
// Número de ejercicio: 7

#include <iostream>
#include <vector>
#include <cstring>

using namespace std;

struct s_producto
{
    char nombre[30];
    char codigo[30];
    float precio;
    int cantidad_en_inventario;
    char observaciones [50];
};

void Llenar_vector(vector<s_producto>&inventario,int n);
s_producto Ingresar_datos();
void Mostrar_mas_caro(vector<s_producto>inventario);
void mostrar_producto(s_producto producto);

int main()
{
    int n;
    system ("cls");
    vector <s_producto> inventario;
    cout << "Ingrese la cantidad de productos: ";
    cin >> n;
    cin.ignore();
    Llenar_vector(inventario,n);
    cout << "La cantidad de prodcutos es: "<<inventario.size()<<endl;
    Mostrar_mas_caro(inventario);
    return 0;
}

void Llenar_vector(vector<s_producto>&inventario,int n)
{
    s_producto Producto;
    for (int i = 0; i < n; i++)
    {
        cout << "Registro N°: "<<i+1<<endl;
        Producto = Ingresar_datos();
        inventario.push_back(Producto);
    }
}

s_producto Ingresar_datos()
{
    s_producto Producto;
    cin.ignore();
    cout << "Ingrese el Nombre del producto: ";
    cin.getline(Producto.nombre,30);
    cout << "Ingrese el codigo del producto: ";
    cin.getline(Producto.codigo,30);
    cout << "Ingrese el precio del producto: ";
    cin >> Producto.precio;
    cout << "Ingrese la cantidad en inventario: ";
    cin >> Producto.cantidad_en_inventario;
    cin.ignore();
    if (Producto.cantidad_en_inventario <= 5)
        strcpy(Producto.observaciones,"Producto con baja cantidad en inventario");
    else
        strcpy (Producto.observaciones,"");
    return Producto;
}

void Mostrar_mas_caro(vector<s_producto>inventario)
{
    s_producto mas_caro;
    mas_caro.precio=0;
    for (int i = 0; i < inventario.size(); i++)
    {
        if (inventario[i].precio > mas_caro.precio)
        {
            mas_caro=inventario[i];
        }
    }
    mostrar_producto(mas_caro);
}

void mostrar_producto(s_producto producto)
{
    cout << "------Registro-----"<<endl;
    cout << "Nombre: "<<producto.nombre<<endl;
    cout << "Codigo: "<<producto.codigo<<endl;
    cout << "Precio: "<<producto.precio<<endl;
    cout << "Cantidad: "<<producto.cantidad_en_inventario<<endl;
    cout << "Observacion: "<<producto.observaciones<<endl;
}