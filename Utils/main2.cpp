#include <iostream>
#include "Utils.h"
#include "printing.h"

#define SIZE 10

int main2()
{
	int* nums = new int[SIZE];
	nums = reverse10();
	printWithSpace(nums, SIZE);
	reverse(nums, SIZE);
	printWithSpace(nums, SIZE);
}