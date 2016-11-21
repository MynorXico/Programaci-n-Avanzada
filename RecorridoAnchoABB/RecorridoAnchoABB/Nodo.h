#ifndef  _Nodo_H_
#define _Nodo_H_

#pragma once


class Nodo
{
public:
	int valor;
	Nodo *izquierda;
	Nodo *derecha;
public:
	Nodo(int);
	~Nodo();
};


#endif // ! _Nodo_H_


