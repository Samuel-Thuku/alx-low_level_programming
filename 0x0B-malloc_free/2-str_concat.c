#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
*str_concat - concatenates two strings of any size
*@s1: the first string to concatenate
*@s2: the second string to concatenate
*Return: the two strings concatenated
*/
char *str_concat(char *s1, char *s2)
{
	int num1 = 0, num2 = 0, num3 = 0, num4 = 0;
	char *s;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[num1])
	{
		num1++;
	}
	while (s2[num2])
	{
		num2++;
	}
	num4 = num1 + num2;
	s = malloc((sizeof(char) * num4) + 1);
	if (s == NULL)
	{
		return (NULL);
	}
	num2 = 0;
	while (num3 < num4)
	{
		if (num3 <= num1)
		{
			s[num3] = s1[num3];
		}
		if (num3 >= num1)
		{
			s[num3] = s2[num2];
			num2++;
		}
		num3++;
	}
	s[num3] = '\0';
	return (s);
}
