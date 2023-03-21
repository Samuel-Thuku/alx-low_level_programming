#include <stdio.h>
/**
*main - Entry point
*
*Return: Always 0 (Success)
*/
int main(void)
{
	int digit1, digit2, digit3;

	digit1 = 0;
	while (digit1 < 10)
	{
	digit2 = 0;
	while (digit2 < 10)
	{
	digit3 = 0;
	while (digit3 < 10)
	{
	if (digit3 > digit2 && digit2 > digit1)
	{
	putchar('0' + digit1);
	putchar('0' + digit2);
	putchar('0' + digit3);
	if (digit1 < 7)
	{
	putchar(',');
	putchar(' ');
	}
	}
	digit3++;
	}
	digit2++;
	}
	digit1++;
	}
	putchar('\n');
	return (0);
}
