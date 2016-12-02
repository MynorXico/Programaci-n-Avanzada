// Arbol Binario.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <stdlib.h>

using namespace std;


typedef struct nodo
{
	int numero;
	struct nodo *izquierda;
	struct nodo *derecha;
}
*ArbolBinario;


					
struct nodoCola
{
	ArbolBinario puntero;
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

void encola(struct cola &nodo, ArbolBinario numeroNodo)
{
	struct nodoCola *numeroCola;
	numeroCola = new(struct nodoCola);
	numeroCola->puntero = numeroNodo;
	numeroCola->siguiente = NULL;
	if (nodo.delante == NULL)
		nodo.delante = numeroCola;
	else
		(nodo.atras)->siguiente = numeroCola;
	nodo.atras = numeroCola;
}

ArbolBinario desencola(struct cola &nodo)
{
	struct nodoCola *numeroCola;
	numeroCola = nodo.delante;
	ArbolBinario numeroNodo = numeroCola->puntero;
	nodo.delante = (nodo.delante)->siguiente;
	delete(numeroCola);
	return numeroNodo;
}

ArbolBinario crearNodo(int numero)
{
	ArbolBinario nuevoNodo = new(struct nodo);
	nuevoNodo->numero = numero;
	nuevoNodo->izquierda = NULL;
	nuevoNodo->derecha = NULL;

	return nuevoNodo;
}

void insertar(ArbolBinario &arbol, int numero)
{
	if (arbol == NULL)
	{
		arbol = crearNodo(numero);
		cout << "\n\t  Insertado..!" << endl << endl;
	}
	else if (numero < arbol->numero)
		insertar(arbol->izquierda, numero);
	else if (numero > arbol->numero)
		insertar(arbol->derecha, numero);
}

void preOrden(ArbolBinario arbol)
{
	if (arbol != NULL)
	{
		cout << arbol->numero << " ";
		preOrden(arbol->izquierda);
		preOrden(arbol->derecha);
	}
}

void enOrden(ArbolBinario arbol)
{
	if (arbol != NULL)
	{
		enOrden(arbol->izquierda);
		cout << arbol->numero << " ";
		enOrden(arbol->derecha);
	}
}

void postOrden(ArbolBinario arbol)
{
	if (arbol != NULL)
	{
		enOrden(arbol->izquierda);
		enOrden(arbol->derecha);
		cout << arbol->numero << " ";
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
			cout << arbol->numero << ' ';

			if (arbol->izquierda != NULL)
				encola(nodo, arbol->izquierda);
			if (arbol->derecha != NULL)
				encola(nodo, arbol->derecha);
		}
	}
}



void menu()
{
	
	cout << "\n\t  ..[ ARBOL BINARIO DE BUSQUEDA ]..\n  ";
	cout << "\t [1]  Insertar elemento                  \n";
	cout << "\t [2]  Recorridos de profundiad           \n";
	cout << "\t [3]  Recorrido por nieveles (Amplitud)  \n";
	cout << "\t [4] SALIR                              \n";
	cout << "\n\t Ingrese opcion : ";
}

void menu2()
{
	
	cout << endl;
	cout << "\t [1] En Orden     \n";
	cout << "\t [2] Pre Orden    \n";
	cout << "\t [3] Post Orden   \n";
	cout << "\t     Opcion :  ";
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
				cout << "\numeroNodo\t Arbol vacio..!";
			break;



		case 3:
			cout << "Mostrando recorrido por amplitud";
			RecorridoNivel(arbol);
			break;


		case 4:
			exit(0);
		}

		cout << "";
		//system("pause");  // hacer pausa y presionar una tecla para continuar
	} while (opccionMenu1 != 11);

}