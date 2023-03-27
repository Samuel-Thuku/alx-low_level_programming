#include "main.h"
#include <string.h>
/**
*_puts - a function a string followed by a new line.
*@str: the statement being displayed
*/
void _puts(char *str)
{
	int num1, num2;

	num2 = strlen(str);
	for (num1 = 0; num1 < num2; num1++)
	{
	_putchar(str[num1]);
	_putchar('\n');
	}
}
