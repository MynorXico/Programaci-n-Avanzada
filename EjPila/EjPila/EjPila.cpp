// EjPila.cpp : main project file.

#include "stdafx.h"
#include "Pila.h"
#include "Nodo.h"
#include <iostream>


using namespace std;
using namespace System;

int main()
{
	Pila *nuevaPila = new Pila();
	Nodo *nuevoNodo;
	nuevaPila->Push(40,nuevoNodo);

	cout << "Push(40)" << endl;
	nuevaPila->Push(100, nuevoNodo);
	cout << "Push(100)" << endl;
	nuevaPila->Push(240, nuevaPila->actual);
	cout << "Push(240)" << endl;
	nuevaPila->Push(30, nuevaPila->actual);
	cout << "Push(30)" << endl;
	nuevaPila->Push(700, nuevaPila->actual);
	cout << "Push(700)" << endl;
	cout << "Pop() = " << nuevaPila->Pop() << endl;
	cout << "Pop() = " << nuevaPila->Pop() << endl;
	cout << "Pop() = " << nuevaPila->Pop() << endl;
	cout << "Pop() = " << nuevaPila->Pop() << endl;
	cout << "Pop() = " << nuevaPila->Pop() << endl;
    return 0;
}
