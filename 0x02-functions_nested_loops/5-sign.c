#include "main.h"
/**
* print_sign - determines if a number is positive or negative
* @n: the number being checked
*
*Return: 1 and prints + if n is greater than zero
*Returns 0 and prints 0 if n is zero
*Returns -1 and prints - if n is less than zero
 */
int print_sign(int n)
{
	if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		putchar(43);
		return (+1);
	}
}
