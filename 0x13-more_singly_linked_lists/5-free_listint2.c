#include <stdlib.h>
#include "lists.h"

/**
*free_listint2 - a function that frees a listint_t list.
*@head: the head of the linked list
*Return: zero
**/
void free_listint2(listint_t **head)
{
	listint_t *toNULL;

	if (head)
	{
		while (*head)
		{
			toNULL = (*head);
			*head = (*head)->next;
			free(toNULL);
		}
	}
	else
	{
		return (0);
	}
	free(*head);
	head = 0;
}
