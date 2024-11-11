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
}

list* removeFromList(list* first)
{
	list* newFirst = first->next;
	delete first;
	first = newFirst;
}