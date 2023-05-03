#include <stdlib.h>
#include "lists.h"
/**
*sum_listint - function that returns the sum of all the data (n)
*@head: the head of the linked list
*Return: if the list is empty, return 0
*/
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head)
	{
		while (head)
		{
			sum += head->n;
			head = head->next;
		}
	}
	return (sum);
}
