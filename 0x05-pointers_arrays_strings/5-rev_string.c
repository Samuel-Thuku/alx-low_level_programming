#include "main.h"

/**
*rev_string - reverses a string
*@s: the string to be modified
*
* Return: void
*/
void rev_string(char *s)
{
	int num1, num2, num3;
	char *letter1, letter2;

	letter1 = s;

	while (s[num2] != '\0')
	{
		num2++;
	}

	for (num3 = 1; num3 < num2; num3++)
	{
		letter1++;
	}

	for (num1 = 0; num1 < (num2 / 2); num1++)
	{
		letter2 = s[num1];
		s[num1] = *letter1;
		*letter1 = letter2;
		letter1--;
	}
}
