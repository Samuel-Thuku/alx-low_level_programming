#include "main.h"
#include <stdio.h>
#include <string.h>
/**
*_atoi - a function that converts a string to an integer.
*@s: the string to be converted.
*Return: 0 if no integer.
*/
int _atoi(char *s)
{
	int num1, num2;

	num1 = strlen(s);
	for (num2 = 0; num2 < num1; num2++)
	{
		s[num2] =s[num2] - 48;
	}
	return (0);
}
