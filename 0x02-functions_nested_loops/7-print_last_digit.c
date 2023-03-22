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

	if (num < 0)
	{
		last_digit = (num * -1) % 10;
	}
	last_digit = num % 10;
	return (last_digit);
}
