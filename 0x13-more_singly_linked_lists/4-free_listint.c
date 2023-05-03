#include <stdlib.h>
#include "lists.h"
/**
*free_listint - frees a linked list
*@head: the head of the linked list
**/
void free_listint(listint_t *head)
{
	listint_t *freeList;

	while (head)
	{
		freeList = head;
		head = head->next;
		free(freeList);
	}
	free(head);
}
