#include <stdio.h>
/**
*main - Entry point
*
*Return: Always 0 (Success)
*/
int main(void)
{
	int digit1, digit2, digit3, digit4;

	digit1 = 0;
	while (digit1 < 10)
	{
	digit2 = 0;
	while (digit2 < 10)
		{
		digit3 = 0;
		while (digit3 < 10)
		{
			digit4 = 0;
			while (digit4 < 10)
			{
				if ((digit4 + digit3) >= (digit2 + digit1))
				{
				putchar('0' + digit1);
				putchar('0' + digit2);
				putchar(' ');
				putchar('0' + digit3);
				putchar('0' + digit4);
				putchar(',');
				putchar(' ');
				}
				digit4++;
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
