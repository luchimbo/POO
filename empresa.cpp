#include "empresa.hpp"

void Empresa::asignar_numero_empleados(int nuevo_numero_empleados){
	
	numero_empleados = nuevo_numero_empleados;
}

int Empresa::obtener_numero_empleados(){
	return numero_empleados;
}

void Empresa::asignar_nombre_empresa(string nuevo_nombre_empresa){
	nombre_empresa = nuevo_nombre_empresa;
}

string Empresa::obtener_nombre_empresa(){
	return nombre_empresa;
}

void Empresa::asignar_stock(int nuevo_stock){
	stock = nuevo_stock;
}

int Empresa::obtener_stock(){
	return stock;
}