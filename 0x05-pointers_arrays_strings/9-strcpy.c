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
	int num1, num2;

	num2 = strlen(src);
	for (num1 = 0; num1 < num2; num1++)
	{
		dest[num1] = src[num1];
	}
	dest[num1++] = '\0';
	return (dest);
}
