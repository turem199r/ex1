#include "UI.h"

void printList(Queue* first, int size)
{
	int i = 0;
	for (i = 0; i < size; i++)
	{
		std::cout << first->queueNum << " ";
	}
	std::cout << std::endl;
}