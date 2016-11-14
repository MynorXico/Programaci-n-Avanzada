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

	ArbolBinario();
	~ArbolBinario();
};


