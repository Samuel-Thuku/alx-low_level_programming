#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
* delete_nodeint_at_index - a function that deletes the node at index index of a listint_t linked list.
* @head: the head of a linked list
* @index: is the index of the node that should be deleted.
* Return: 1 if it succeeded, -1 if it failed
**/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int num = 1;
	listint_t *new = *head, *temp;

	if (!head || !*head)
	{
		return (-1);
	}

	if (index == 0)
	{
		*head = new->next;
		free(new);
		return (1);
	}

	temp = *head;
	while (temp)
	{
		if (num == index)
		{
			new = temp->next;
			temp->next = new->next;
			free(new);
			return (1);
		}

		temp = temp->next;
		num++;
	}

	return (-1);
}
