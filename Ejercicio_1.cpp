/*
2. Inventario de Productos y Ventas
Objetivo: Desarrollar un programa que permita registrar, listar, buscar, actualizar y eliminar 
productos, así como gestionar las ventas.
Requisitos:
• Define una estructura Producto con los campos: nombre (cadena), precio (flotante).
• Define una estructura Venta con los campos: idVenta (entero), producto (cadena), cantidad 
(entero), precioTotal (flotante).
• Implementa un menú con las siguientes opciones:
A: Registrar un nuevo producto.
B: Listar los productos registrados.
C: Buscar un producto por nombre.
D: Actualizar los datos de un producto.
E: Eliminar un producto.
F: Registrar una venta.
G: Listar las ventas realizadas.
H: Calcular el total de ventas realizadas.
S: Salir del programa.
• El menú debe estar ciclado y permitir volver al menú principal después de cada opción.
*/
#include <iostream>
#include <string.h>
#include <windows.h>

using namespace std;

struct Producto {
    string nombre;
    float precio;
};

struct Venta {
    int idVenta;
    string producto;
    int cantidad;
    float precioTotal;
};

Producto productos[100];
Venta ventas[100];
int cantidadProductos = 0;
int cantidadVentas = 0;
int idVentaActual = 1;

void registrarUnProducto() {
    if (cantidadProductos >= 100) {
        cout << "No se pueden registrar más productos." << endl;
        return;
    }
    cout << "Digite el nombre del producto: ";
    cin.ignore();
    getline(cin, productos[cantidadProductos].nombre);
    cout << "Digite el precio del producto: ";
    cin >> productos[cantidadProductos].precio;
    cantidadProductos++;
    cout << "El producto se ha registrado correctamente." << endl;
}

void listarProductos() {
    if (cantidadProductos == 0) {
        cout << "No hay productos registrados." << endl;
        return;
    }
    for (int i = 0; i < cantidadProductos; i++) {
    	cout<<"Producto " << i + 1 <<":\n";
        cout << ". Nombre: " << productos[i].nombre << ", Precio: " << productos[i].precio <<"\n"<< endl;
    }
}
void buscarProducto(){
    string nombre;
    cout << "Digite el nombre del producto a buscar: ";
    cin.ignore();
    getline(cin, nombre);
    for (int i = 0; i < cantidadProductos; i++) {
        if (productos[i].nombre == nombre) {
            cout << "Producto encontrado: Nombre: " << productos[i].nombre << ", Precio: " << productos[i].precio << endl;
            return;
        }
    }
    cout << "Producto no encontrado." << endl;
}

void actualizarProducto(){
    string nombre;
    cout << "Digite el nombre del producto a actualizar: ";
    cin.ignore();
    getline(cin, nombre);
    for (int i = 0; i < cantidadProductos; i++) {
        if (productos[i].nombre == nombre) {
            cout << "Digite el nuevo nombre del producto: ";
            getline(cin, productos[i].nombre);
            cout << "Digite el nuevo precio del producto: ";
            cin >> productos[i].precio;
            cout << "Producto actualizado con éxito." << endl;
            return;
        }
    }
    cout << "Producto no encontrado." << endl;
}

int main(){
	SetConsoleOutputCP(CP_UTF8);
char opcion;
	 do {
	 cout << "\nMenú:\n";
	 cout << "A: Registrar un nuevo producto\n";
	 cout << "B: Listar los productos registrados\n";
	 cout << "C: Buscar un producto por  nombre\n";
	 cout << "D: Actualizar los datos de un producto\n";
	 cout << "E: Eliminar un producto\n";
	 cout << "F: Registrar una venta\n";
	 cout << "G: Listar las ventas realizadas\n";
	 cout << "H: Calcular el total de ventas realizadas\n";
	 cout << "S: Salir del programa\n";
	 cout << "Ingrese una opcion: ";
	 cin >> opcion;
	 
	 switch(opcion){
	 case 'A':
	 	registrarUnProducto();
	 	break;
	 case 'B':
	 	listarProductos();
	 	break;
	 case 'C':
	 	buscarProducto();
	 	break;
	 case 'D':
	 	actualizarProducto();
	 	break;
	 	
	 case 'E':
	 	break;
		  
	 case 'F':
	 	break;
	 	
	 case 'G':
	 	break;
		  
	 case 'H':
	 	break;
		  
	 case 'S':
	  	break;
	 default: 
	 	cout << "La opcion digitada no es valida." << endl;
	}
   	}while(opcion!='S');
return 0;
}