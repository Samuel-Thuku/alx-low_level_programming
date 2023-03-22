#include "main.h"
/**
 *print_times_table - prints the n times table, starting with 0.
 *@n: the number being multiplied.
 */
void print_times_table(int n)
{
	int num1, num2, product;

	if (n >= 0 && n < 16)
	{
		num1 = 0;
		while (num1 <= n)
		{
			num2 = 0;
			while (num2 <= n)
			{
				product = num1 * num2;
				if (product < 10)
				{
					if (num2 > 0 && num2 < n)
					{
						_putchar(' ');
					}
					_putchar('0' + product);
				}
				else
				{
					_putchar('0' + (product / 10));
					_putchar('0' + (product % 10));
				}
				if (num2 < n)
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
}
