#include "main.h"
/**
 *print_line - draws a line
 *@n: is the number of times _ is printed
 */
void print_line(int n)
{
	for (; n > 0; n--)
	{
		_putchar(095);
	}
	_putchar('\n');
}
