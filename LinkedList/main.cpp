#include <iostream>
#include "LinkedList.h"
#include "UI.h"

int main()
{
	list* first = new list;
	initList(first, 3);
	printList(first);
	first = addToList(first);
	printList(first);
	first = removeFromList(first);
	printList(first);
	pop(first, 2);
	printList(first);
	cleanList(first);
}