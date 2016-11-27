#include "stdafx.h"
#include "ListaEnlazadaManejada.h"


void ListaEnlazadaManejada::BuscarPosicion(int posicion, NodoManejado ^%nodoActual, NodoManejado ^%nodoAnterior)
{
	if ((posicion < 0) || (posicion >= CantidadElementos))
	{
		throw gcnew Exception("Índice fuera de los límites de la lista");
	}

	nodoAnterior = nullptr;
	nodoActual = Cabeza;

	for (int i = 0; i < posicion; i++)
	{
		nodoAnterior = nodoActual;
		nodoActual = (nodoActual)->GetSiguiente();
	}

}

ListaEnlazadaManejada::ListaEnlazadaManejada()
{
	Cabeza = nullptr;
	CantidadElementos = 0;
}

void ListaEnlazadaManejada::Agregar(int dato)
{
	NodoManejado ^nodoNuevo = gcnew NodoManejado(dato);

	if (Cabeza != nullptr)
	{
		NodoManejado ^nodoActual = nullptr;
		NodoManejado ^nodoAnterior = nullptr;

		BuscarPosicion(CantidadElementos - 1, nodoActual, nodoAnterior);

		nodoActual->SetSiguiente(nodoNuevo);
	}
	else
	{
		Cabeza = nodoNuevo;
	}

	CantidadElementos++;
}

int ListaEnlazadaManejada::ObtenerLongitud()
{
	return CantidadElementos;
}

int ListaEnlazadaManejada::ObtenerEnPosicion(int posicion)
{
	NodoManejado ^nodoActual = nullptr;
	NodoManejado ^nodoAnterior = nullptr;

	BuscarPosicion(posicion, nodoActual, nodoAnterior);

	return nodoActual->GetDato();
}

void ListaEnlazadaManejada::EliminarEnPosicion(int posicion)
{
	NodoManejado ^nodoActual = nullptr;
	NodoManejado ^nodoAnterior = nullptr;

	if (posicion == 0)
	{
		nodoActual = Cabeza;
		Cabeza = nodoActual->GetSiguiente();
	}
	else
	{
		BuscarPosicion(posicion, nodoActual, nodoAnterior);
		nodoAnterior->SetSiguiente(nodoActual->GetSiguiente());
	}

	delete nodoActual;

	CantidadElementos--;
}

String ^ListaEnlazadaManejada::VerLista()
{
	if (Cabeza == nullptr)
	{
		return "Lista Vacía";
	}
	else
	{
		StringBuilder ^listaCompleta = gcnew StringBuilder();
		NodoManejado ^nodoActual = Cabeza;

		while (nodoActual != nullptr)
		{
			listaCompleta->Append(" -> " + nodoActual->GetDato());
			nodoActual = nodoActual->GetSiguiente();
		}

		return listaCompleta->ToString();
	}
}
