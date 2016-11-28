#pragma once
#include "Nodo.h"
class Pila
{
public:
	Nodo* actual;
public:
	Pila();
	~Pila();
	void Push(int,Nodo*);
	int Pop();
};

