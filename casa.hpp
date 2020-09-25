#ifndef __CASA__
#define	__CASA__

#include <iostream>
using namespace std;

const int DEF_NUMERO_CASA = 0;
const strin DEF_DIRECCION = "def direccion";
const string DEF_COLOR_PUERTA = "def color puerta";
const bool DEF_TIENE_MASCOTA = true; 

class Casa{
	private:
		int numero_casa = DEF_NUMERO_CASA;
		string direccion = DEF_DIRECCION;
		string color_puerta = DEF_COLOR_PUERTA;
		bool tiene_mascota = DEF_TIENE_MASCOTA;

	public:

		void asignar_numero_casa(int nuevo_numero_casa);

		int obtener_numero_casa():

		void asignar_direccion(string nueva_direccion);

		string obtener_direccion();

		void asignar_color_puerta(string nuevo_color_puerta);

		string obtener_nombre();

		void asignar_tiene_mascota(bool nuevo_tiene_mascota);

		bool obtener_tiene_mascota();
};

#endif