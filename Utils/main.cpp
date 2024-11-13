#include <iostream>
#include "Utils.h"

#define SIZE 6

int main()
{
	int i = 0;
	int nums[SIZE] = { 1,2,3,4,5,6 };
	for (i = 0; i < SIZE; i++)
	{
		std::cout << nums[i] << " ";
	}
	std::cout << std::endl;
	reverse(nums, SIZE);
	for (i = 0; i < SIZE; i++)
	{
		std::cout << nums[i] << " ";
	}
	std::cout << std::endl;
	return 0;
}