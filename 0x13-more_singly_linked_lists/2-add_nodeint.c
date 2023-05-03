#include <stdlib.h>
#include "lists.h"
/**
*add_nodeint - adds a new node at the beginning of a linstint_int list
*@head: the head of the linked list
*@n: the value to add to the new node
*Return: the address of the new element, or NULL it failed
**/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *addList;

	if (head != NULL)
	{
		addList = malloc(sizeof(listint_t));
		if (addList == NULL)
		{
			return (NULL);
		}
		addList->n = n;
		addList->next = *head;
		*head = addList;
		return (addList);
	}
	return (NULL);
}
