// ArbolBinarioBusqueda.cpp: archivo de proyecto principal.

#include "stdafx.h"
#include "ArbolBinario.h"
#include <cstdlib>

using namespace System;
void menu();

int main(array<System::String ^> ^args)
{
	ArbolBinario *arbol = new ArbolBinario();
	char option;
	int numero = 0;
	int cont = 0;
	int raiz = 0;
	do
	{
		system("cls");
		menu();
		scanf("%c", &option);
		switch (option)
		{
		case '1':
			printf("Ingrese un numero \n");
			scanf("%d", &numero);
			arbol->Insertar(numero);
			if (cont == 0)
			{
				raiz = numero;
			}
			cont++;
			printf("Presione cualquier tecla para continuar \n");
			system("PAUSE");
			break;
		case '2':
			printf("Ingrese el numero a eliminar \n");
			scanf("%d", &numero);
			if (numero != raiz)
			{
				arbol->Eliminar(numero);
			}
			else
			{
				printf("La raiz fue eliminada \n");
				arbol->Eliminar(numero);
				system("PAUSE");
				return 0;
			}
			printf("Presione cualquier tecla para continuar \n");
			system("PAUSE");
			break;
		case '3':
			arbol->MostrarEnOrden();
			printf("Presione cualquier tecla para continuar \n");
			system("PAUSE");
			break;
		default:
			break;
		}
	} while (option != '4');

	Console::ReadKey();
	return 0;
}

void menu()
{
	printf("Ingrese una opcion \n");
	printf("1. Ingresar un numero\n");
	printf("2. Eliminar un elemento\n");
	printf("3. Mostrar en Orden \n");
	printf("4. Salir \n");
}