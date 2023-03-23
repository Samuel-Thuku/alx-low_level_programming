#include "main.h"
/**
 *print_diagonal - prints a diagonal line
 *@n: the number of times the character \ is printed
 *
 */
void print_diagonal(int n)
{
	int num1, num2;

	for (num1 = 0; n > 0; n--)
	{
		for (num2 = num1; num2 > 0; num2--)
		{
			_putchar(' ');
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
