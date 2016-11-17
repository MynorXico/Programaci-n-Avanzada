#pragma once
#include <string>
using namespace std;

class Automovil
{

public:
	string marca;
	string linea;
	int modelo;
	int velocidadMax;
	Automovil(string marca, string linea, int modelo, int velociadadMax);
	~Automovil();
	Automovil()
	{
	}
};

