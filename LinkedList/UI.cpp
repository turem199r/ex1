#include <iostream>
#include "UI.h"

void printList(list* first)
{
	while (first->next != NULL)
	{
		std::cout << first->numInList << std::endl;
		first = first->next;
	}
}