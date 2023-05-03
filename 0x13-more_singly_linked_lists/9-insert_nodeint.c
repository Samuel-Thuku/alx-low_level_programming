#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
*insert_nodeint_at_index -function that inserts a new node
*@head: the head of the linked list
*@idx: is the index of the list where the new node should be added.
*@n: the number ....
*Return: the address of the new node, or NULL if it failed
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newNode, *pos;
	unsigned int num = 1;

	if (head)
	{
		newNode = malloc(sizeof(listint_t));
		if (newNode == NULL)
		{
			return (NULL);
		}
		newNode->n = n;
		if (idx > 0)
		{
			pos = *head;
			while (pos)
			{
				if (num == idx)
				{
					newNode->next = pos->next;
					pos->next = newNode;
					return (newNode);
				}
				pos = pos->next;
				num++;
			}
			if (idx > num)
			{
				return (NULL);
			}
		}
		else
		{
			newNode->next = *head;
			*head = newNode;
		}
		return (newNode);
	}
	return (NULL);
}
