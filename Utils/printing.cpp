#include "printing.h"

void printWithSpace(int* array, int size)
{
	int i = 0;
	for (i = 0; i < size; i++)
	{
		std::cout << array[i] << " ";
	}
	std::cout << std::endl;
}