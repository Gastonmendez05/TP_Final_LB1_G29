#pragma once
#include <string>
#include <iostream>
using namespace std;

class cvikingo
{
private:
	int daño;
	int vida;
	const string nombre;
	const string apellido;
    string posicion;
	static int poblacionvikinga;
	bool mato, vivo;
public:
	cvikingo(int daño,int vida, bool vivo, static int poblacionvikinga, const string apellido,const string nombre, string posicion,bool mato);
	~cvikingo();
	string get_posicion();
	void set_posicion();
	bool get_mato();
	void set_mato();
	int get_vida();
	void set_vida();


	void atacardragones(cDragon)//recibe la vida del dragon 
    

	



	
};

