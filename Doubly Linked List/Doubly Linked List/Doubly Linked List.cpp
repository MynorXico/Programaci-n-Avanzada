// Doubly Linked List.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include <iostream>
#include "List.h"
using namespace std;
int main()
{
	//
	List *list = new List();
	//
	bool insert=true;
	int n;
	while (insert==true)
	{
		cout << "Ingrese dato \n";
		cin >> n;
		if (n==0)
		{
			insert = false;
		}
		else
		{
			list->Insert(n);
			
		}
	}
	
	cout << "Forward printing\n";
	list->PrintF(list->head);
	cout << "\n";

	cout << "Backwards printing\n";
	list->PrintB(list->end);
	cout << "\n";

	cout << "Sorted list" << endl;
	list->Sort();
	list->PrintF(list->head);
	cout << "\n";

	cout << "Ingrese dato para busqueda" << endl;
	int n1;
	cin >> n1;
	list->SearchByD(n1);

	cout << "Ingrese dato para eliminar" << endl;
	int n2;
	cin >> n2;
	list->Delete(n2);

	cout << "Forward printing\n";
	list->PrintF(list->head);
	cout << "\n";

	cout << "Backwards printing\n";
	list->PrintB(list->end);
	cout << "\n";
	system("pause");
    return 0;
}

