#pragma once
#include "Nodo.h"
class ArbolBinario
{
public:
	Nodo* raiz;

	bool vacio() const { return raiz == NULL; }
	void Insertar(int dato);
	void Eliminar(int dato);
	void MostrarEnOrden();
	void EnOrden(Nodo *arbol);
	void postOrden(Nodo *arbol);
	void preOrden(Nodo *arbol);
	bool buscar(Nodo *arbol, int dato);

	ArbolBinario();
	~ArbolBinario();
};


