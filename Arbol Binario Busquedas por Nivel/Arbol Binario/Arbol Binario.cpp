// Arbol Binario.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <stdlib.h>

using namespace std;

/*---------  Estructura del arbol  -------*/
typedef struct nodo
{
	int nro;
	struct nodo *izquierda, *derecha;
}*ArbolBinario;


					 /* ---------- Estructura de la cola ---------*/
struct nodoCola
{
	ArbolBinario ptr;
	struct nodoCola *siguiente;
};

struct cola {
	struct nodoCola *delante;
	struct nodoCola *atras;
};

void inicializaCola(struct cola &nodo)
{
	nodo.delante = NULL;
	nodo.atras = NULL;
}

void encola(struct cola &nodo, ArbolBinario n)
{
	struct nodoCola *p;
	p = new(struct nodoCola);
	p->ptr = n;
	p->siguiente = NULL;
	if (nodo.delante == NULL)
		nodo.delante = p;
	else
		(nodo.atras)->siguiente = p;
	nodo.atras = p;
}

ArbolBinario desencola(struct cola &nodo)
{
	struct nodoCola *p;
	p = nodo.delante;
	ArbolBinario n = p->ptr;
	nodo.delante = (nodo.delante)->siguiente;
	delete(p);
	return n;
}

ArbolBinario crearNodo(int primerNodo)
{
	ArbolBinario nuevoNodo = new(struct nodo);
	nuevoNodo->nro = primerNodo;
	nuevoNodo->izquierda = NULL;
	nuevoNodo->derecha = NULL;

	return nuevoNodo;
}

void insertar(ArbolBinario &arbol, int primerNodo)
{
	if (arbol == NULL)
	{
		arbol = crearNodo(primerNodo);
		cout << "\n\t  Insertado..!" << endl << endl;
	}
	else if (primerNodo < arbol->nro)
		insertar(arbol->izquierda, primerNodo);
	else if (primerNodo > arbol->nro)
		insertar(arbol->derecha, primerNodo);
}

void preOrden(ArbolBinario arbol)
{
	if (arbol != NULL)
	{
		cout << arbol->nro << " ";
		preOrden(arbol->izquierda);
		preOrden(arbol->derecha);
	}
}

void enOrden(ArbolBinario arbol)
{
	if (arbol != NULL)
	{
		enOrden(arbol->izquierda);
		cout << arbol->nro << " ";
		enOrden(arbol->derecha);
	}
}

void postOrden(ArbolBinario arbol)
{
	if (arbol != NULL)
	{
		enOrden(arbol->izquierda);
		enOrden(arbol->derecha);
		cout << arbol->nro << " ";
	}
}

void RecorridoNivel(ArbolBinario arbol)
{
	struct cola nodo;
	inicializaCola(nodo);
	cout << "\t";

	if (arbol != NULL)
	{
		encola(nodo, arbol);

		while (nodo.delante != NULL)
		{
			arbol = desencola(nodo);
			cout << arbol->nro << ' ';

			if (arbol->izquierda != NULL)
				encola(nodo, arbol->izquierda);
			if (arbol->derecha != NULL)
				encola(nodo, arbol->derecha);
		}
	}
}


void menu()
{
	//system("cls");
	cout << "\n\t\t  ..[ ARBOL BINARIO DE BUSnodoUEDA ]..  \n\n";
	cout << "\t [1]  Insertar elemento                  \n";
	cout << "\t [2]  Recorridos de profundiad           \n";
	cout << "\t [3]  Recorrido por nieveles (Amplitud)  \n";
	cout << "\t [4] SALIR                              \n";
	cout << "\n\t Ingrese opcion : ";
}

void menu2()
{
	//system("cls");   // para limpiar pantalla
	cout << endl;
	cout << "\t [1] En Orden     \n";
	cout << "\t [2] Pre Orden    \n";
	cout << "\t [3] Post Orden   \n";
	cout << "\n\t     Opcion :  ";
}

int main()
{
	ArbolBinario arbol = NULL;
	int valor;
	int opccionMenu1, opccionMenu2;


	system("color f9");  
	do
	{
		menu();  
		cin >> opccionMenu1;
		cout	 << endl;

		switch (opccionMenu1)
		{
		case 1:
			cout << " Ingrese valor : ";  cin >> valor;
			insertar(arbol, valor);
			break;



		case 2:
			menu2(); 
			cin >> opccionMenu2;

			if (arbol != NULL)
			{
				switch (opccionMenu2)
				{
				case 1:
					enOrden(arbol); break;
				case 2:
					preOrden(arbol); break;
				case 3:
					postOrden(arbol); break;
				}
			}
			else
				cout << "\n\t Arbol vacio..!";
			break;



		case 3:
			cout << "\n\n Mostrando recorrido por amplitud\n\n";
			RecorridoNivel(arbol);
			break;


		case 4:
			exit(0);
		}

		cout << "\n\n\n";
		//system("pause");  // hacer pausa y presionar una tecla para continuar
	} while (opccionMenu1 != 11);

}