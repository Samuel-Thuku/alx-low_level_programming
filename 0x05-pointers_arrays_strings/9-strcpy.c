#include "main.h"

/**
* _strcpy - copy a string
* @dest: destination value
* @src: source value
*
* Return: the pointer to dest
*/
char *_strcpy(char *dest, char *src)
{
	int num1;

	for (num1 = 0; src[num1] != '\0'; num1++)
	{
		dest[num1] = src[num1];
	}
	dest[num1++] = '\0';
	return (dest);
}
