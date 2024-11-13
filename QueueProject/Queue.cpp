#include "Queue.h"
#include <iostream>

void initQueue(Queue* q, unsigned int size)
{
	Queue* start = q;
	q = new Queue;
	int i = 0;
	for (i = 0; i < size; i++)
	{
		q->queueNum = i;
		q = q->nextPerson;
		q = new Queue;
	}
	q->nextPerson = NULL;
	q = start;
	delete start;
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
	delete nextP;
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
	if (s == NULL)
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
	if (!isEmpty(s))
	{
		return true;
	}
	else
	{
		return false;
	}
}