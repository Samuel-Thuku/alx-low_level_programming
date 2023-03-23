#include "main.h"
/**
 *print_diagonal - prints a diagonal line
 *@n: the number of times the character \ is printed
 *
 */
void print_diagonal(int n)
{
	int num1, num2;

if (n > 0)
{
	for (num1 = 0; num1 <= n; num1++)
	{
		for (num2 = n; num2 > 0; num2--)
		{
			_putchar(' ');
		}
			_putchar('\\');
			_putchar('\n');
	}
}
else
{
	_putchar('\n');
}
}
