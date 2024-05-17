#pragma once
#include <string>
#include <iostream>
using namespace std;
class cDragon
{
private:
	string nombre;
	string caracteristicas;
	string color;
	string tipo;
	float tamaño;
	int vida;
	bool baja;
	bool estado;
public:
	string tipo;
	cDragon(string nombre, string tipo, string caracteristicas, string color, float tamaño, int vida, bool baja, bool estado);
		~cDragon();
		string get_nombre();
		string get_caracteristicas();
		string get_color();
		bool get_baja();
		bool get_estado();
		float get_tamaño();
		int get_vida();
		void set_vida();
		void set_estado();
		void set_baja();
		string get_ataque(cAtaque);//recibe el tipo ataque de cAtaque
	
	

};
