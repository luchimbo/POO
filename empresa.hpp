#ifndef __EMPRESA__
#define	__EMPRESA__

#include <iostream>
using namespace std;

const int DEF_NUMERO_EMPLEADOS = 0;
const string DEF_NOMBRE = "def nombre";
const int DEF_STOCK= 0; 


class Empresa{
	private:
		int numero_empleados = DEF_NUMERO_EMPLEADOS;
		string nombre_empresa = DEF_NOMBRE;
		int stock = DEF_STOCK;

	public:

		void asignar_numero_empleados(int nuevo_numero_empleados);

		int obtener_numero_empleados();

		void asignar_nombre_empresa(string nuevo_nombre_empresa);

		string obtener_nombre_empresa();

		void asignar_stock(int nuevo_stock);

		int obtener_stock();
};


#endif