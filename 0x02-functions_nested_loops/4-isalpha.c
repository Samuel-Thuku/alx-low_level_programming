#include "main.h"
/**
 * _isalpha - determines alphabetical characters both lower aand upper case
 * @c: the letter being checked
 *
 * Return: 1 for lowercase or upper characters 0 for anything else
 */
int _isalpha(int c)
{
	if (c >= 65)
	{
		while (c <= 90)
		{
			return (1);
		}
	}
	if (c >= 97)
	{
		while (c <= 122)
		{
			return (1);
		}
	}
	return (0);
}
