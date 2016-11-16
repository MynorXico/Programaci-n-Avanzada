#include "stdafx.h"
#include "ArbolBinario.h"


ArbolBinario::ArbolBinario()
{
	raiz = NULL;
}

void ArbolBinario::Insertar(int dato)
{
	Nodo *aux = new Nodo();
	Nodo *padre = new Nodo();
	aux->Dato = dato;
	aux->izquierda = NULL;
	aux->derecho = NULL;
	padre = NULL;

	if (raiz == NULL)
	{
		raiz = aux;

	}
	else
	{
		Nodo *hoja;
		hoja = raiz;
		while (hoja)
		{
			padre = hoja;
			if (aux->Dato > hoja->Dato)
			{
				hoja = hoja->derecho;
			}
			else
			{
				hoja = hoja->izquierda;
			}
		}

		if (aux->Dato < padre->Dato)
		{
			padre->izquierda = aux;
		}
		else
		{
			padre->derecho = aux;
		}
	}
}

void ArbolBinario::Eliminar(int dato)
{
	bool SiEncontro = false;
	if (raiz == NULL)
	{
		printf("El arbol esta vacio \n");
		return;
	}

	Nodo* Hoja;
	Nodo* Padre = new Nodo();
	Hoja = raiz;

	while (Hoja != NULL)
	{
		if (Hoja->Dato == dato)
		{
			SiEncontro = true;
			break;
		}
		else
		{
			Padre = Hoja;
			if (dato > Hoja->Dato)
			{
				Hoja = Hoja->derecho;
			}

			else
			{
				Hoja = Hoja->izquierda;
			}

		}
	}
	if (!SiEncontro)
	{
		printf("Dato no encontrado \n");
		return;
	}

	if ((Hoja->izquierda == NULL && Hoja->derecho != NULL) || (Hoja->izquierda != NULL && Hoja->derecho == NULL))
	{
		if (Hoja->izquierda == NULL && Hoja->derecho != NULL)
		{
			if (Padre->izquierda == Hoja)
			{
				Padre->izquierda = Hoja->derecho;
				delete Hoja;
				printf("dato eliminado \n");
			}
			else
			{
				Padre->derecho = Hoja->derecho;
				delete Hoja;
				printf("dato eliminado \n");
			}
		}
		else
		{
			if (Padre->izquierda == Hoja)
			{
				Padre->izquierda = Hoja->izquierda;
				delete Hoja;
				printf("dato eliminado \n");
			}
			else
			{
				Padre->derecho = Hoja->izquierda;
				delete Hoja;
				printf("dato eliminado \n");
			}
		}
		return;
	}


	if (Hoja->izquierda == NULL && Hoja->derecho == NULL)
	{
		if (Padre->izquierda == Hoja)
		{
			Padre->izquierda = NULL;
		}
		else
		{
			Padre->derecho = NULL;
			delete Hoja;
			printf("dato eliminado \n");
		}
		return;
	}

	if (Hoja->izquierda != NULL && Hoja->derecho != NULL)
	{
		Nodo* temp;
		temp = Hoja->derecho;
		if ((temp->izquierda == NULL) && (temp->derecho == NULL))
		{
			Hoja = temp;
			delete temp;
			printf("dato eliminado \n");
			Hoja->derecho = NULL;
		}
		else
		{

			if ((Hoja->derecho)->izquierda != NULL)
			{
				Nodo* lHoja;
				Nodo* lHojap;
				lHojap = Hoja->derecho;
				lHoja = (Hoja->derecho)->izquierda;
				while (lHoja->izquierda != NULL)
				{
					lHojap = lHoja;
					lHoja = lHoja->izquierda;
				}
				Hoja->Dato = lHoja->Dato;
				delete lHoja;
				printf("dato eliminado \n");
				lHojap->izquierda = NULL;
			}
			else
			{
				Nodo* aux;
				aux = Hoja->derecho;
				Hoja->Dato = aux->Dato;
				Hoja->derecho = aux->derecho;
				delete aux;
				printf("dato eliminado \n");
			}

		}
		return;
	}
}

void ArbolBinario::MostrarEnOrden()
{
	EnOrden(raiz);
}

void ArbolBinario::EnOrden(Nodo *arbol)
{

	if (arbol != NULL)
	{
		if (arbol->izquierda)
			EnOrden(arbol->izquierda);

		printf("%d \n", arbol->Dato);

		if (arbol->derecho)
			EnOrden(arbol->derecho);
		else
		{
			return;
		}
	}
	else
	{
		printf("El arbol esta vacio \n");
	}
}

ArbolBinario::~ArbolBinario()
{
}
void ArbolBinario::postOrden(Nodo *arbol)
{

	if (arbol != NULL)
	{
		if (arbol->izquierda)
			EnOrden(arbol->izquierda);

		
		if (arbol->derecho)
			EnOrden(arbol->derecho);
		
		printf("%d \n", arbol->Dato);
		else
		{
			return;
		}
	}
	else
	{
		printf("El arbol esta vacio \n");
	}
}
void ArbolBinario::preOrden(Nodo *arbol)
{

	if (arbol != NULL)
	{
		printf("%d \n", arbol->Dato);
		
		if (arbol->izquierda)
			EnOrden(arbol->izquierda);

		
		if (arbol->derecho)
			EnOrden(arbol->derecho);
		
		else
		{
			return;
		}
	}
	else
	{
		printf("El arbol esta vacio \n");
	}
}
bool ArbolBinario::buscar(Nodo *arbol, int dato)
{
	if(arbol == NULL) return 0;
	else if(arbol->dato < dato) return buscar(arbol->izquierda, dato);
	else if(arbol->dato > dato) return buscar(arbol->derecha, dato);
	else return 1;
}
