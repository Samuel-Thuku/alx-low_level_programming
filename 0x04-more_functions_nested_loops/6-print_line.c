#include "main.h"
/**
 *print_line - draws a line
 *@n: is the number of times _ is printed
 */
void print_line(int n)
{
	int num;

	if (n > 0)
	{
		for (num = n; num > 0; num--)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
