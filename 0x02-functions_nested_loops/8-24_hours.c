#include "main.h"
/**
 *jack_bauer - displays time.
 *
 *
 *
 */
void jack_bauer(void)
{
	int num1, num2;

	num1 = 0;
	while (num1 < 24)
	{
		num2 = 0;
		while (num2 < 60)
		{
			_putchar('0' + (num1 / 10));
			_putchar('0' + (num1 % 10));
			_putchar(58);
			_putchar('0' + (num2 / 10));
			_putchar('0' + (num2 % 10));
			num2++;
		}
		num1++;
	}
}
