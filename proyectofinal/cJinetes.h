#pragma once
#include <string>
#include <iostream>
using namespace std;
class cJinetes
{
private:
	const	string nombre;
	const string apellido; 
	string apodo, caracteristicas, sudragon;
	const string fechadenacimiento;
		bool apto;
public: 
	cJinetes(const string nombre,const string apellido,string sudragon, string apodo,string caracteristicas,const string fechadenacimiento, bool apto);
	~cJinetes();
	string get_nombre();
	string get_apellido();
	string get_apodo();
	string get_sudragon();
	string set_suddragon();
	string get_caracteristicas();
	string get_fechadenacimiento();
	bool get_apto();
	bool set_apto(cEntrenaminto);// intentamos llamar a la otra clase y su resultado
};

