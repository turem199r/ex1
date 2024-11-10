#ifndef QUEUE_H
#define QUEUE_H


/* a queue contains positive integer values. */
typedef struct Queue
{
	int queueNum;
	struct Queue* nextPerson;
} Queue;

void initQueue(Queue* q, unsigned int size); // makes a new queue list according to the input
void cleanQueue(Queue* q); // cleans the queue

void enqueue(Queue* q, unsigned int newValue); // puts information in the queue
int dequeue(Queue* q); // return element in top of queue, or -1 if empty

bool isEmpty(Queue* s); // returns 1 if the queue is empty
bool isFull(Queue* s); // returns 1 if queue is full

#endif /* QUEUE_H */