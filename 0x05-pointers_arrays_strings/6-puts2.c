#include "main.h"
#include <string.h>
/**
*puts - prints every other character of a string, followed by a new line.
*@str: the string being displayed.
*/
void puts2(char *str)
{
	int num1, num2;

	num1 = strlen(str);
	for (num2 = 0; num2 < num1; num2++)
	{
		if ((num2 % 2) == 0)
		{
			_putchar(str[num2]);
		}
	}
	_putchar('\n');
}
