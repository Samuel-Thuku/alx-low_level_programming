#include "main.h"
#include <string.h>
/**
*puts_half - prints half the string.
*@str: the dtring to be displayed.
*/
void puts_half(char *str)
{
	int num1, num2;

	num1 = strlen(str);
	for (num2 = (num1 / 2); num2 <= num1; num2++)
	{
		_putchar(str[num2]);
	}
	_putchar('\n');
}
