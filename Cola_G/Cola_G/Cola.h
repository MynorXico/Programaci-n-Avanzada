#ifndef _COLA_H_
#define _COLA_H_

#pragma once

template <class T> class nodo
{
public:
	T val;
	nodo *sig;
	nodo()
	{
	}
};

template <class T> class Cola
{
private:
	nodo<T> *first;
	nodo<T> *last;
public:
	Cola();
	~Cola();
	void Encolar(T);
	T Listar();
	void Desencolar();
	void Vaciar();
	T Buscar();
	int vacio();

};
#endif