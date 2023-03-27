#include "main.h"
#include <string.h>
/**
*rev_string - a function that reverses a string.
*@s: the string that is being reversed.
*
*/
void rev_string(char *s)
{
	int num1, num2,;
	char *letter;

	num1 = strlen(s);
	for (num2 = 0; num2 <= ((num1 + 2) / 2); num2++)
	{
		*letter = s[num2];
		s[num2] = s[(num1 - 1)];
		s[(num1 - 1)] = *letter;
		num1--;
	}
}
