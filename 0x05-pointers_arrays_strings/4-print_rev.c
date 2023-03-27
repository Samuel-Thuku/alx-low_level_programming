#include "main.h"
#include <string.h>
/**
*print_rev - a function that prints a string in reverse.
*@s: the string being printed.
*
*/
void print_rev(char *s)
{
	int num1, num2;

	num1 = strlen(s);
	for (num2 = (num1 - 1); num2 >= 0; num2--)
	{
		_putchar(s[num2]);
	}
	_putchar('\n');
}
