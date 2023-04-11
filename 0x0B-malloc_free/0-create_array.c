#include "main.h"
#include <stdlib.h>

/**
*create_array - creates an array of chars.
*@size: size of the array
*@c: char to fill in the array
*Return: pointer to array filled or NULL if size is 0.
*/
char *create_array(unsigned int size, char c)
{
	unsigned int num;
	char *s;

	if (size == 0)
	{
		return (NULL);
	}
	s = malloc(size * sizeof(char));

	if (s == NULL)
	{
		return (NULL);
	}
	for (num = 0; num < size; num++)
	{
		s[num] = c;
	}

	return (s);
}
