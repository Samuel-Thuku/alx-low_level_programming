#include "main.h"

/**
*rev_string - reverses a string
*@s: the string to be modified
*
* Return: void
*/
void rev_string(char *s)
{
	int num1, num2;
	char *letter1, *letter2, letter;

	num1 = strlen(s);
	letter1 = s;
	letter2 = s;
	for (num2 = 0; num2 < num1 - 1; num2++)
	{
		letter2++;
	}
	for (num2 = 0; num2 < num1 / 2; num2++)
	{
		letter = *letter2;
		*letter2 = *letter1;
		*letter1 = letter;
		letter1++;
		letter2--;
	}
}
