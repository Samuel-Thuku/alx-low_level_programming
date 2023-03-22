#include "main.h"
/**
 *times_table - prints the 9 times table, starting with 0.
 *
 */
void times_table(void)
{
	int num1, num2, product;

	num1 = 0;
	while (num1 < 10)
	{
		num2 = 0;
		while (num2 < 10)
		{
			product = num1 * num2;
			if (product < 10)
			{
				_putchar('0' + product);
				if (num2 > 0 && num2 < 9)
				{
					_putchar(' ');
				}
			}
			else
			{
				_putchar('0' + (product / 10));
				_putchar('0' + (product % 10));
			}
			if (num2 < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			num2++;
		}
		_putchar('\n');
		num1++;
	}
}
