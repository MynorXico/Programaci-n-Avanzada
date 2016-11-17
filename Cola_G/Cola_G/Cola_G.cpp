// Cola_G.cpp : main project file.

#include "stdafx.h"
#include "Cola.h"
#include "Cola.cpp"
#include <string>
#include <cstdlib>
#include <iostream>
#include "Automovil.h"
using namespace System;
using namespace std;

int main()
{
	bool loop = true;
	Cola <Automovil> *CAuto = new Cola<Automovil>();
	Automovil tmpAutomovil;

	char opt = 'a';
	string marca = "";
	string linea = "";
	int modelo = 0;
	int velocidad = 0;
	bool loopA = true;

	while (loopA)
	{
		cout << "Automoviles\nOprima:\na  Encolar Automovil\nb  Desencolar Automovil\nc  Listar Automoviles\nd  Vaciar\ne  Buscar Más rápidos\nf  Salir" << endl;
		cin >> opt;
		switch ((opt))
		{
		case('a'):
			cout << "Ingrese la marca:" << endl;
			cin >> marca;
			cout << "Ingrese la linea:" << endl;
			cin >> linea;
			cout << "Ingrese el modelo:" << endl;
			cin >> modelo;
			cout << "Ingrese la velociadad maxima:" << endl;
			cin >> velocidad;
			system("cls");
			tmpAutomovil.marca = marca;
			tmpAutomovil.linea = linea;
			tmpAutomovil.modelo = modelo;
			tmpAutomovil.velocidadMax = velocidad;

			CAuto->Encolar(tmpAutomovil);
			break;
		case('b'):
			system("cls");
			CAuto->Desencolar();
			break;
		case('c'):
			system("cls");
			while (CAuto->vacio() == 1)
			{
				tmpAutomovil = CAuto->Buscar();
				velocidad = tmpAutomovil.velocidadMax;
				modelo = tmpAutomovil.modelo;
				marca = tmpAutomovil.marca;
				linea = tmpAutomovil.linea;
				cout << "Marca:" << marca << "\nLinea: " << linea << "\nModelo:" << modelo << "\nVelocidad maxima:" << velocidad << "\n";

			}
			system("PAUSE");
			system("cls");
			break;
		case('d'):
			system("cls");
			CAuto->Vaciar();
			break;
		case('e'):
			system("cls");
			cout << "Autmovil mas rapido:\n";
			while (CAuto->vacio() == 1)
			{
				tmpAutomovil = CAuto->Buscar();
				if (velocidad < tmpAutomovil.velocidadMax)
				{
					velocidad = tmpAutomovil.velocidadMax;
					modelo = tmpAutomovil.modelo;
					marca = tmpAutomovil.marca;
					linea = tmpAutomovil.linea;
				}
			}
			cout << "Marca:" << marca << "\nLinea: " << linea << "\nModelo:" << modelo << "\nVelocidad maxima:" << velocidad << "\n";
			system("PAUSE");
			system("cls");
			break;
		case('f'):
			loopA = false;
			break;
		default:
			system("cls");
			cout << "Ingrese una opcion coherente" << endl;
			system("PAUSE");
			loopA = false;
			break;
		}
		
	}
	return 0;
}
