#include "LinkedList.h"
#include <iostream>

list* addToList(list* first)
{
	list* newNode = new list;
	newNode->next = first;
	while (first->next != NULL)
	{
		first->numInList++;
		first = first->next;
	}
	first = newNode;
	first->numInList = 1;
	return first;
}

list* removeFromList(list* first)
{
	list* newFirst = first->next;
	delete first;
	first = newFirst;
	return first;
}

void pop(list* first, int place)
{
	int i = 0;
	for (i = 0; i < place - 1; i++)
	{
		first = first->next;
	}
	first->next = first->next->next;
}

void initList(list* first, unsigned int size)
{
	unsigned int i = 0;
	list* firstNode = first;
	for (i = 1; i <= size; i++)
	{
		first->numInList = i;
		first = first->next;
	}
	first->next = NULL;
	first = firstNode;
}

void cleanList(list* first)
{
	list* prev = first;
	first = first->next;
	while (first->next != NULL)
	{
		delete prev;
		prev = first;
		first = first->next;
	}
}