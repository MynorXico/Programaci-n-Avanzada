#include "stdafx.h"
#include "Automovil.h"

Automovil::Automovil(string marca, string linea, int modelo, int velociadaMax)
{
	this->marca = marca;
	this->linea = linea;
	this->modelo = modelo;
	this->velocidadMax = velociadaMax;
}



Automovil::~Automovil()
{
}
