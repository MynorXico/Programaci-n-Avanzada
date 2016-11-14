#include "stdafx.h"
#include "Cola.h"
#include <cstdio>

template <class T> Cola <T>::Cola()
{
	last = NULL;
}
template <class T> Cola <T>::~Cola()
{
	destruir();
}
template <class T> int Cola<T>::Encolar(const T valor)
{
	nodo<T> *n = new nodo<T>;
	if (!n)
		return 0;

	if (!first)
		first = n;

	n->sig = last;
	last = n;
	n->val = valor;
	return 1;
}