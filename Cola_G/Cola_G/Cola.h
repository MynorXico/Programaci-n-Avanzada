#ifndef _PILA_H_
#define _PILA_H_

#pragma once

template <class T> struct nodo
{
	T val;
	nodo *sig;
};

template <class T> class Cola
{
private:
	nodo<T> *top;
	nodo<T> *first;
	nodo<T> *last;
public:
	Cola();
	~Cola();
	int Encolar(const T);

};
#endif

