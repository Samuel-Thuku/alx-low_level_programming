#include <stdio.h>
/**
*main - Entry point
*
*Return: Always 0 (Success)
*/
int main(void)
{
	int digit1, digit2;

	digit1 = 0;
	while (digit1 < 10)
	{
		digit2 = 0;
		while (digit2 < 10)
		{
			if (digit1 == 0 || digit2 > digit1)
			{
			putchar('0' + digit1);
			putchar('0' + digit2);
			if (digit1 < 8 && digit2 <= 9)
			{
			putchar(',');
			putchar(' ');
			}
			}
			digit2++;
		}
		digit1++;
	}
	putchar('\n');
	return (0);
}
