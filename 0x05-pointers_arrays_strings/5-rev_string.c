#include "main.h"

/**
*rev_string - reverses a string
*@s: the string to be modified
*
* Return: void
*/
void rev_string(char *s)
{
	char letter1, *num1, *num2;

	for (num2 = num1; *num2 != '\0'; ++num2);
	if (num2 > s)
	--num2;
	for (num1 = s; num1 < num2; ++num1, --num2)
	{
		letter1 = *num1;
		*num1 = *num2;
		*num2 = letter1;
	}

  return s;
}
