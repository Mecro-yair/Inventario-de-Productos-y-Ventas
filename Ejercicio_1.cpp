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
	 	break;
	 	
	 case 'B':
	 	break;
	 	
	 case 'C':
	 	break;
	 	
	 case 'D':
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