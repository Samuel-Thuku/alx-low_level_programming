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
	int num1, num2, num3;

	num2 = strlen(s);
	num3 = 0;
	for (num1 = 0; num1 < num2; num1++)
	{
		num3 = (num3 * 10) + (s[num1] - 48);
	}
	return (num3);
	return (0);
}
