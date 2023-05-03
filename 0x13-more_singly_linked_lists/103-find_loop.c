#include "lists.h"
/**
*find_listint_loop -  a function that finds the loop in a linked list.
*@head: the head of the linked file
*Return: the address of the node where the loop starts, or NULL if no loop
**/
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *case1= head, *case2 = head;

	if (!head)
	{
		return (NULL);
	}
	while (case1 && case2 && case2->next)
	{
		case2 = case2->next->next;
		case1 = case1->next;
		if (case2 == case1)
		{
			case1 = head;
			while (case1 != case2)
			{
				case1 = case1->next;
				case2 = case2->next;
			}
			return (case2);
		}
	}
	return (NULL);
}
