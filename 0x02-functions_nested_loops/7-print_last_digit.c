#include "main.h"
/**
 *print_last_digit - checks the last digit of a number
 *
 *@num: - number being checked
 *
 *Return: the last digit
 *
 */
int print_last_digit(int num)
{
	int last_digit;

	last_digit = num % 10;
	if (last_digit < 0)
	{
		last_digit = last_digit * -1;
	}
	_putchar('0' + last_digit);
	return (last_digit);
	_putchar('\n');
}
