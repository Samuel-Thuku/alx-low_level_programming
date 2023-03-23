#include "main.h"
/**
 * _isdigit - checks for digit 0 to 9
 * @c: the digit being checked
 *
 * Return: 1 for digit characters 0 for anything else
 */
int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
