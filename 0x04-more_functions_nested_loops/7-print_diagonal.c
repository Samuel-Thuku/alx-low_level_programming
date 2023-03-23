#include "main.h"
/**
 *print_diagonal - prints a diagonal line
 *@n: the number of times the character \ is printed
 *
 */
void print_diagonal(int n)
{
	int num;

if (n > 0)
{
	for (num = 0; num <= n; num++)
	{
		for (num = n; num > 0; num--)
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
