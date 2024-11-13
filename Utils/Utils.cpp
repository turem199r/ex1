#include "Utils.h"
#include <iostream>

void reverse(int* nums, unsigned int size)
{
	int i = 0;
	int* temp = new int[size];
	size -= 1;
	for (i = 0; i <= size; i++)
	{
		temp[i] = nums[size - i];
	}
	for (i = 0; i <= size; i++)
	{
		nums[i] = temp[i];
	}
}