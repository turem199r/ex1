#include <iostream>
#include "Utils.h"
#include "printing.h"

//#define SIZE 6
#define SIZE 10
/*
int main()
{
	int i = 0;
	int nums[SIZE] = { 1,2,3,4,5,6 };
	printWithSpace(nums, SIZE);
	reverse(nums, SIZE);
	printWithSpace(nums, SIZE);
	return 0;
}
*/
int main()
{
	int* nums = new int[SIZE];
	nums = reverse10();
	printWithSpace(nums, SIZE);
	reverse(nums, SIZE);
	printWithSpace(nums, SIZE);
}