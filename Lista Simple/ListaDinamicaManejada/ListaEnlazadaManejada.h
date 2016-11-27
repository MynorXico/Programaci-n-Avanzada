#pragma once

#include "NodoManejado.h"

using namespace System;
using namespace System::Text;

public ref class ListaEnlazadaManejada
{
private:
	NodoManejado ^Cabeza;
	int CantidadElementos;
	void BuscarPosicion(int posicion, NodoManejado ^%posicionActual, NodoManejado ^%posicionAnterior);

public:
	ListaEnlazadaManejada();
	void Agregar(int dato);
	int ObtenerLongitud();
	int ObtenerEnPosicion(int posicion);
	void EliminarEnPosicion(int posicion);
	String ^VerLista();
};

