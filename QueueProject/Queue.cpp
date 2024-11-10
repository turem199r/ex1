#include "Queue.h"
#include <iostream>

void initQueue(Queue* q, unsigned int size)
{
	q = new Queue[size];
}

void cleanQueue(Queue* q)
{
	Queue* nextP = 0;
	while (!isEmpty(q))
	{
		nextP = q->nextPerson;
		q->queueNum = 0;
		delete(q);
		q = nextP;
	}
	std::cout << "Queue was cleaned\n";
}

void enqueue(Queue* q, unsigned int newValue)
{
	q->queueNum = newValue;
}

int dequeue(Queue* q)
{
	int queueNum = 0;
	if (!(q->nextPerson))
	{
		queueNum = -1;
	}
	while (q->nextPerson)
	{
		q = q->nextPerson;
		queueNum = q->queueNum;
	}
	return queueNum;
}

bool isEmpty(Queue* s)
{
	if (s != NULL)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool isFull(Queue* s)
{
	
}