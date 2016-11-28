#ifndef _Arbol_H_
#define _Arbol_H_


#pragma once

#include "Nodo.h"
#include <cstdio>

class Arbol
{
	Nodo *Raiz;
public:
	Arbol();
	~Arbol();
	void InsertarNodo(int, Nodo*);
	void RecorrerPorNiveles(Nodo*)
	
};
#endif // !_Arbol_H_

struct nodoCola 
{
	Nodo *newNode;
	struct nodoCola *sgte;
};
struct cola 
{
	struct nodoCola *delante;
	struct nodoCola *atras;
};

void inicializaCola(struct cola &colaPtr)
{
	colaPtr.delante = NULL;
	colaPtr.atras = NULL;
}

void encola(struct cola &colaPTR,  Nodo *n)
{
	struct nodoCola *nuevoNodo;
	nuevoNodo = new(struct nodoCola);
	nuevoNodo->newNode = n;
	nuevoNodo->sgte = NULL;
	if (colaPTR.delante == NULL)
		colaPTR.delante = nuevoNodo;
	else
		(colaPTR.atras)->sgte = nuevoNodo;
	colaPTR.atras = nuevoNodo;
}

Nodo desencola(struct cola &q)
{
	struct nodoCola *p;
	p = q.delante;
	Nodo *n = p->newNode;
	q.delante = (q.delante)->sgte;
	delete(p);
	return *n;
}