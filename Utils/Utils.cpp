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

int* reverse10()
{
	int* numArr = new int[10];
	int i = 0;
	std::cout << "Enter the 10 numbers you want in the list\n";
	for (i = 0; i < 10; i++)
	{
		std::cin >> numArr[i];
	}
	return numArr;
}