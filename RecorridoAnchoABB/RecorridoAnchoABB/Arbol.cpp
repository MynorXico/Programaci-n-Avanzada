#include "stdafx.h"
#include "Arbol.h"
#include <cstdio>
#include <iostream>



using namespace std;


Arbol::Arbol()
{
	Raiz = NULL;
}


Arbol::~Arbol()
{
}

void Arbol::InsertarNodo(int numero, Nodo* nuevoNodo)
{
	Nodo *nuevo = new Nodo(numero);
	nuevo->valor = numero;
	if (!nuevoNodo)
	{
		Raiz = nuevo;
	}
	else
	{
		if (nuevo->valor < nuevoNodo->valor)
		{
			if (nuevoNodo->izquierda)
			{
				InsertarNodo(numero, nuevoNodo->izquierda);
			}
			else
			{
				nuevoNodo->izquierda = nuevo;
			}
		}
		else if (nuevo->valor > nuevoNodo->valor)
		{
			if (nuevoNodo->derecha)
			{
				InsertarNodo(numero, nuevoNodo->derecha);
			}
			else
			{
				nuevoNodo->derecha = nuevo;
			}
		}
	}
}

void RecorrerPorNiveles(Nodo* arbol)
{
	struct cola q;
	inicializaCola(q);
	cout << "\t";

	if (arbol != NULL)
	{
		encola(q, arbol);

		while (q.delante != NULL)
		{
			*arbol = desencola(q);
			cout << arbol->valor << ' ';

			if (arbol->izquierda != NULL)
				encola(q, arbol->izquierda);
			if (arbol->derecha != NULL)
				encola(q, arbol->derecha);
		}
	}
}