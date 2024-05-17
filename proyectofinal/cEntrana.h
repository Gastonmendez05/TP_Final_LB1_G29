#pragma once
#pragma once
#include <string>
#include <iostream>
using namespace std;
class cEntrana

{
private:
	string fechainicio, fechafin;
		enum tipo;
		enum resultado;
			bool resulta;
public:
	cEntrana(string fechainicio, string fechafin, enum tipo, enum resultado ,bool resulta);
	~cEntrana();
	string get_fechaincio();
	string get_fechafin();
	string get_tipo();
    string get_resultado();
	bool get_apto();
	void set_apto();
	void set_resultado();
	

};

