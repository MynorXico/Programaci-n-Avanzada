#pragma once
#include "Node.h"

class List
{
public:
	List();
	Node *head;
	Node *end;
	int c = 0;
	void Insert(int d);
	void PrintF(Node *head);
	void PrintB(Node *end);
	void SearchByD(int d);
	void Sort();
	void Delete(int);
	~List();
};

