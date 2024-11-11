#pragma once
#ifndef linkedListBuild
#define linkedListBuild

typedef struct list
{
	int numInList;
	struct list* next;
}list;

list* addToList(list* first);// adding to the head of the list
list* removeFromList(list* first);// removing the head of the list

#endif // !linkedListBuild
