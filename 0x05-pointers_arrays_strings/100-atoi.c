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
	int num1;

	num1 = s[0] - 48;
	return (num1);
}
