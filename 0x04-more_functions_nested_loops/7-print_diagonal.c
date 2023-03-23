#include "main.h"
/**
 *print_diagonal - prints a diagonal line
 *@n: the number of times the character \ is printed
 *
 */
void print_diagonal(int n)
{
	int num1, num2;

	num1 = 0;
	while (n > 0)
	{
		num1 = num2;
		while (num2 > 0)
		{
			_putchar(' ');
			num2--;
		}
		_putchar('\\');
		_putchar('\n');
		num1++;
		n--;
	}
	if (num1 < 1)
	{
		_putchar('\n');
	}
}
