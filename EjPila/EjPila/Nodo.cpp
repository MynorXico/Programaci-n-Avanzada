#include "stdafx.h"
#include <cstdio>
#include "Nodo.h"


Nodo::Nodo(int n)
{
	siguiente = NULL;
	valor = n;
}


Nodo::~Nodo()
{
}
