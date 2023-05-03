#include <stdlib.h>
#include "lists.h"
/**
*pop_listint - a function that deletes the head node
*@head: the head of the linked list
*Return: if the linked list is empty return 0
*/
int pop_listint(listint_t **head)
{
	listint_t *newHead;
	int n = 0;

	if (*head != NULL)
	{
		newHead = (*head)->next;
		n = (*head)->n;
		free(*head);
		*head = newHead;
	}
	return (n);
}
