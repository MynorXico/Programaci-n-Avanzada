#include "stdafx.h"
#include "Cola.h"
#include <cstdio>

template <class T> Cola <T>::Cola()
{
	first = NULL;
	last = NULL;
}
template <class T> Cola <T>::~Cola()
{
}
template <class T> void Cola<T>::Encolar(T valor)
{

	nodo<T> *n = new nodo<T>();

	n->val = valor;

	if (!first)
	{
		first = n;
		last = n;
	}
	last->sig = n;
	last = n;
	last->sig = NULL;
}
template <class T> void Cola<T>::Desencolar()
{
	if (first == last)
	{
		nodo<T> *n = last;
		T N = n->val;
		last = NULL;
		delete n;
	}
	if (first)
	{
		nodo<T> *n = first;
		T N = n->val;
		first = first->sig;
		delete n;
	}
}
template <class T> void Cola <T>::Vaciar()
{
	nodo<T> *n;
	while (first)
	{
		n = first;
		first = first->sig;
		delete n;
	}
	first = NULL;
	last = NULL;
}
template <class T> T Cola<T>::Buscar()
{
	if (first)
	{
		nodo<T> *n = first;
		T N = n->val;
		first = first->sig;
		delete n;
		return N;
	}
}
template <class T> int Cola<T>::vacio()
{
	nodo<T> *n = first;
	if (!first)
	{
		return 0;
	}
	else if (!last)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}
template <class T> T Cola<T>::Listar()
{
	if (first)
	{
		nodo<T> *n = first;
		T N = n->val;
		first = first->sig;
		delete n;
		return N;
	}
}