#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
*get_nodeint_at_index - a function that returns the nth node
*@head: the head of the linked list
*@index: is the index of the node, starting at 0
*Return: if the node does not exist, return NULL
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int num = 0;

	if (head)
	{
		while (head)
		{
			if (num == index)
			{
				return (head);
			}
			head = head->next;
			num++;
		}
	}
	return (NULL);
}

