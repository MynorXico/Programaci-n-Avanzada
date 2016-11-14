// Malloc y SizeOf.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>
#include <stdlib.h>
#include <iostream>
#include <stdio.h>




using namespace std;



int recuperarPosicion(int *inicial, int tamaño, int x, int y)
{
	return *(inicial + (y * tamaño) + x);
}


void main()
{

	try
	{
		int tamaño_matriz = 0;
		cout << "Ingrese tamaño de la matriz";
		printf("");
		cin >> tamaño_matriz;

		//Condicion tamaño matriz
		if ((tamaño_matriz >= 1) && (tamaño_matriz <= 50))
		{
			int * matriz = nullptr;
			int * siguiente_posicion = nullptr;

			//Reserva memoria
			matriz = (int *)malloc(tamaño_matriz * tamaño_matriz * sizeof(int));

			siguiente_posicion = matriz;

			//Ingreso de numeros en matriz
			for (int j = 0; j < (tamaño_matriz * tamaño_matriz); j++)
			{
				*siguiente_posicion = (j + 1);
				siguiente_posicion++;
			}

			//Busqueda matriz por medio de int *
			for (int i = 0; i < tamaño_matriz; i++)
			{
				for (int j = 0; j < tamaño_matriz; j++)
				{
					printf("| %d |", recuperarPosicion(matriz, tamaño_matriz, j, i));
				}
				printf("\n");
			}
			printf("\n");
			printf("\n");


			printf("n=", tamaño_matriz);
			printf("");
			
			// (n/2),(n/2)
			int posicion_a = int((tamaño_matriz) / 2);
			int posicion_b = int((tamaño_matriz) / 2);
			printf("");
			printf("En la posicion(n / 2, n / 2)");
			printf("| %d |", recuperarPosicion(matriz, tamaño_matriz, (posicion_a - 1), (posicion_b - 1)));

			// (1,1)
			printf("\n");
			printf("");
			printf("En la posicion(1, 1)");
			printf("| %d |", recuperarPosicion(matriz, tamaño_matriz, 1, 1));

			// (n,n)
			printf("\n");
			printf("");
			printf("En la posicion(n, n)");
			printf("| %d |", recuperarPosicion(matriz, tamaño_matriz, (tamaño_matriz - 1), (tamaño_matriz - 1)));
			printf("\n");

			// (n/2, 1)
			int posicion_c = int((tamaño_matriz / 2));
			printf("");
			printf("En la posicion(n/2, 1)");
			printf("| %d |", recuperarPosicion(matriz, tamaño_matriz, (posicion_c - 1), 1));
			printf("\n");

			// (n/2, n)
			int posicion_d = int((tamaño_matriz / 2));
			printf("");
			printf("En la posicion(n/2, n)");
			printf("| %d |", recuperarPosicion(matriz, tamaño_matriz, (posicion_d - 1), (tamaño_matriz - 1)));
			printf("\n");
			printf("\n");
			printf("\n");

			system("pause");
		}

		else
		{
			throw exception();
		}
	}

	catch (exception)
	{
		cout << "Error" << endl;
		system("pause");
	}

}
