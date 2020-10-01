#include <iostream>

using namespace std;

#include "empresa.hpp"

void menu(){
	cout<<("\n1-Asignar numero de empleados\n 2-Mostrar numero de empleados\n 3-Asignar nombre\n 4-Mostrar nombre\n 5-Ingrese nuevo numero de stock\n 6-Mostrar stock\n 7-Salir\n")<<endl;

}

void menu_eleccion(int opcion, Empresa &una_empresa){
	int nuevo_numero_empleados = -1;
	string nuevo_nombre_empresa = "nuevo nombre";
	int nuevo_stock = 0;
	switch (opcion){
		case 1:
			cout << "Ingrese nuevo numero de empleados " <<endl;
			cin >> nuevo_numero_empleados;
			una_empresa.asignar_numero_empleados(nuevo_numero_empleados);
			break;
		case 2:
			cout << "Numero de empleados: " << una_empresa.obtener_numero_empleados();
			break;		
		case 3:
			cout << "Ingrese nuevo nombre " <<endl;
			cin >> nuevo_nombre_empresa;
			una_empresa.asignar_nombre_empresa(nuevo_nombre_empresa);
			break;
		case 4:
			cout << "Nombre de la empresa: " << una_empresa.obtener_nombre_empresa();
			break;
		case 5:
			cout << "Ingrese nuevo numero de stock: " << endl;
			cin >> nuevo_stock;
			una_empresa.asignar_stock(nuevo_stock);
			break;
		case 6:
			cout << "Numero de stock: " << una_empresa.obtener_stock();
			break;
		case 7:
			cout <<"Salir \n"<<endl;
			break;
}
}

int main(){
	int opcion = -1;

	Empresa una_empresa;
	do{
	menu();
	cin >> opcion;
	menu_eleccion(opcion, una_empresa);
	}while (opcion != 7);
	return 0;
}