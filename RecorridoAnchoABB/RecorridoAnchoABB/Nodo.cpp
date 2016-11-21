#include "stdafx.h"
#include "Nodo.h"
#include <cstdio>


Nodo::Nodo(int nuevoValor)
{
	valor = nuevoValor;
	izquierda = NULL;
	derecha = NULL;
}


Nodo::~Nodo()
{
}
