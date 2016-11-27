#include "stdafx.h"
#include "NodoManejado.h"


NodoManejado::NodoManejado(int dato)
{
	Dato = dato;
	Siguiente = nullptr;
}

NodoManejado ^NodoManejado::GetSiguiente()
{
	return Siguiente;
}

void NodoManejado::SetSiguiente(NodoManejado ^siguiente)
{
	Siguiente = siguiente;
}

int NodoManejado::GetDato()
{
	return Dato;
}

