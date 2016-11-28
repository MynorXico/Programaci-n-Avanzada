// Metodos de busqueda.cpp: define el punto de entrada de la aplicación de consola.
//
#include "stdafx.h"
#include "stdio.h"
#include <cstdlib>

using namespace std;
bool BusquedaSecuencial(int[], int, int);
bool BusquedaBinaria(int[], int, int, int);

int main()
{
	
	const int SIZE = 10;
	int miVector[SIZE] = {1, 1, 2, 3, 5, 8, 13, 21, 34, 55};
	char option = 'Y';
	int miDato;

	while ((option) != 'E')
	{
		system("cls");
		printf("Presione S para busqueda secuencial o B para binaria y E para salir\n");
		scanf_s(" %c", &option);
		

		printf("Ingrese el numero a buscar\n");
		scanf_s("%d", &miDato);

		switch ((option))
		{
		case 'B':
			if (BusquedaBinaria(miVector, miDato, 0, (SIZE - 1))){
				printf("Valor encontrado");
			}
			else {
				printf("Valor no encontrado");
			}
			system("pause>nul");
			break;

		case 'S':
			if (BusquedaSecuencial(miVector, miDato, SIZE)){
				printf("Valor encontrado");
			}
			else {
				printf("Valor no encontrado");
			}
			system("pause>nul");
			break;

		default:
			printf("Se equivoco de busqueda");
			system("pause>nul");
			break;
		}

	}

	getchar();
    return 0;
}

bool BusquedaSecuencial(int arreglo[], int dato, int tamanio){
	for (int i = 0; i < tamanio; i++){
		if (arreglo[i] == dato)
			return true;
	}
	return false;
}

bool BusquedaBinaria(int arreglo[], int dato, int inferior, int superior){
	if (inferior <= superior){
		int pivote = ((superior - inferior) / 2) + inferior;

		if (dato < arreglo[pivote]){
			return BusquedaBinaria(arreglo, dato, inferior, pivote - 1);
		}
		else if (dato > arreglo[pivote]){
			return BusquedaBinaria(arreglo, dato, pivote + 1, superior);
		}
		else {
			return true;
		}
	}
	else {
		return false;
	}

}
