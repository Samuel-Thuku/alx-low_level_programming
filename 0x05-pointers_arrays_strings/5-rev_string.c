#include "main.h"
#include <string.h>
/**
*rev_string - a function that reverses a string.
*@s: the string that is being reversed.
*
*/
void rev_string(char *s)
{
	int num1, num2;

	num2 = strlen(s);
	for (num1 = 0; num1 < (num2 / 2); num1++)
	{
		s[num1] = s[(num2 -1)];
	}
}
