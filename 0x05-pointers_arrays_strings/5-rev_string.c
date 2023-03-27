#include "main.h"
#include <string.h>
/**
*rev_string - a function that reverses a string.
*@s: the string that is being reversed.
*
*/
void rev_string(char *s)
{
	int num1, num2, num3;
	char string[num2];

	num2 = strlen(s);
	num3 = num2;
	for (num1 = 0; num1 < num3; num1++)
	{
		string[num1] = s[(num3 - 1)];
		num3--;
	}
}
