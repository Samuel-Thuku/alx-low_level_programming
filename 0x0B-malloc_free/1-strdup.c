#include "holberton.h"
#include <stdlib.h>

/**
*_strdup - duplicates a string.
*@str: the string to duplicate
*Return: the string duplicated
*/
char *_strdup(char *str)
{
	int num1 = 0, num2 = 1;
	char *s;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[num2])
	{
		num2++;
	}

	s = malloc((sizeof(char) * num2) + 1);

	if (s == NULL)
	{
		return (NULL);
	}
	while (num1 < num2)
	{
		s[num1] = str[num1];
		num1++;
	}

	s[num1] = '\0';
	return (s);
}
