#include "lists.h"
/**
* free_listint_safe - a function that frees a listint_t list.
* @h: pointer to the first node
* Return: the size of the list that was free’d
*/
size_t free_listint_safe(listint_t **h)
{
	size_t num1 = 0;
	int num2;
	listint_t *temp;

	if (!h || !*h)
	{
		return (0);
	}
	while (*h)
	{
		num2 = *h - (*h)->next;
		if (num2 > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			num1++;
		}
		else
		{
			free(*h);
			*h = NULL;
			num1++;
			break;
		}
	}
	*h = NULL;
	return (num1);
}
