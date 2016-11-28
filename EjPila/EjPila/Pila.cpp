#include "stdafx.h"
#include "Pila.h"
#include "Nodo.h"
#include <cstdio>


Pila::Pila()
{
	actual = NULL;
}


Pila::~Pila()
{
}

void Pila::Push(int valor, Nodo* actual)
{
	Nodo* nuevo = new Nodo(valor);
	if (!actual)
	{
		actual = nuevo;
	}
	else if(actual->siguiente)
	{
		Push(valor, actual->siguiente);
	}
	else
	{
		actual->siguiente = nuevo;
	}
}

int Pila::Pop()
{
	Nodo* nuevo;
	int valor;
	if (!actual)
	{
		return 0;
	}
	nuevo = actual;
	actual = nuevo->siguiente;
	valor = nuevo->valor;
	delete nuevo;
	return valor;
}