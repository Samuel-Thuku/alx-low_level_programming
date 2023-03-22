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
	return (last_digit);
}
