#pragma once
#ifndef linkedList
#define linkedList

typedef struct list
{
	int numInList;
	struct list* next;
}list;

list* addToList(list* first);// adding to the head of the list
list* removeFromList(list* first);// removing the head of the list

void pop(list* first, int place);
void initList(list* first, unsigned int size);
void cleanList(list* first);
#endif // !linkedListBuild
