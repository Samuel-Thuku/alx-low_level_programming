#include <stdio.h>
/**
*main - Entry point
*
*Return: Always 0 (Success)
*/
int main(void)
{
	char alphabet, ALPHABET;

	alphabet = 'a';
	ALPHABET = 'A';
	while (alphabet <= 'z')
	{
		putchar(alphabet);
		alphabet++;
	}
	while(ALPHABET <= 'Z')
	{
		putchar(ALPHABET);
		ALPHABET++;
	}
	putchar('\n');
	return (0);
}
