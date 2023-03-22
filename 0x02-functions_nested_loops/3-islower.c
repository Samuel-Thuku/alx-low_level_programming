#include "main.h"
/**
 * _islower - determines lowercase characters
 * @c: the letter being checked
 *
 * Return: 1 for lowercase characters 0 for anything else
 */
int _islower(int c)
{

	if (c >= 97)
	{
	while (c <= 122)
	{
		return (1);
		c++;
	}
	}
	return (0);
}
