#include <iostream>
#include "Queue.h"

int main()
{
	Queue* first = new Queue;
	int element = 0;
	bool empty = false;
	bool full = false;
	initQueue(first, 3);
	enqueue(first, 1);
	element = dequeue(first);
	empty = isEmpty(first);
	full = isFull(first);
}