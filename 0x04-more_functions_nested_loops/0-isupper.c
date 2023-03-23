#include "main.h"
/**
 *_isupper - determines uppercase characters
 *@c: the letter being checked
 *
 *Return: 1 for lowercase characters 0 for anything else
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
	return (0);
	}
}
