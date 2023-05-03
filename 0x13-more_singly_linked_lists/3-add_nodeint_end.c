#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
*add_nodeint_end - adds a new node to the end
*@head: the head of the linked list
*@n: the value to add to the end
*Return: The address of the new element, or NULL it failed
**/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *addList, *temp;

	if (head)
	{
		addList = malloc(sizeof(listint_t));
		if (addList == NULL)
		{
			return (NULL);
		}
		addList->n = n;
		addList->next = NULL;
		if (*head == NULL)
		{
			*head = addList;
			return (*head);
		}
		else
		{
			temp = *head;
			while (temp->next)
			{
				temp = temp->next;
			}
			temp->next = addList;
			return (temp);
		}
	}
	return (NULL);
}
