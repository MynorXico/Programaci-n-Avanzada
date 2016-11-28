#include "stdafx.h"
#include "List.h"
#include <iostream>
using namespace std;
List::List()
{
	head = nullptr;
	end = nullptr;
}


List::~List()
{
}
void List::Insert(int d)
{
	Node *newN = new Node();
	newN->data = d;
	if ((head == nullptr) && (end == nullptr))
	{
		head = newN;
		end= newN;
		c++;
	}
	else
	{
		end->next = newN;
		newN->previous = end;
		end = newN;
		c++;
	}
}
void List::PrintF(Node *head)
{
	Node *aux = head;
	while (aux!=nullptr)
	{
		cout<< aux->data << "-";
		aux = aux->next;
	}
}
void List::PrintB(Node *end)
{
	Node *aux = end;
	while (aux != nullptr)
	{
		cout << aux->data << "-";
		aux = aux->previous;
	}
}
void List::SearchByD(int d)
{
	Node *mynode = new Node();
	mynode = head;

	while (mynode != nullptr)
	{
		if (mynode->data == d)
		{
			cout << "El elemento pertenece a la lista" << endl;
		}
		mynode = mynode->next;

	}
}
void List::Sort()
{
	Node *a = head;
	Node *b = head;
	int aux;
	for (a=head; a!=nullptr; a=a->next)
	{
		for (b=a->next; b!=nullptr; b=b->next)
		{
			if (a->data>b->data)
			{
				aux = a->data;
				a->data = b->data;
				b->data = aux;
			}
		}
	}
}
void List::Delete(int d)
{
	Node *visit = head;
	Node *deleted = new Node();
	while (visit != nullptr)
	{
		if (visit->data == d)
		{
			deleted = visit;
			if (visit == head)
			{
				head = head->next;
				head->previous = nullptr;
			}
			else if (visit == end)
			{
				end = end->previous;
				end->next = nullptr;
			}
			else
			{
				Node *before = visit->previous;
				Node *after = visit->next;
				before->next = visit->next;
				after->previous = visit->previous;
			}
		}
		visit = visit->next;
	}
	delete deleted;
	delete visit;
}
