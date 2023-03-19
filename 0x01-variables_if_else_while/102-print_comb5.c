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
	while (digit1 < 99)
	{
		digit2 = digit1 + 1;
		while (digit2 < 100)
		{
			putchar('0' + (digit1 / 10));
			putchar('0' + (digit1 % 10));
			putchar(' ');
			putchar('0' + (digit2 / 10));
			putchar('0' + (digit2 % 10));
			if (digit1 == 98 && digit2 == 99)
			{
				putchar('\n');
			}
			else
			{
				putchar(',');
				putchar(' ');
			}
		digit2++;
		}
		digit1++;
	}
	return (0);
}
