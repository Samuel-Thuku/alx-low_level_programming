#include "main.h"
/**
 *print_times_table - prints the n times table, starting with 0.
 *@n: the number being multiplied.
 */
void print_times_table(int n)
{
	int num, product;

	if (n > 0 && n < 16)
	{
		num = 0;
		while (num <= n)
		{
			num = 0;
			while (num <= n)
			{
				product = n * n;
				if (product < 10)
				{
					_putchar(' ');
					_putchar('0' + product);
				}
				else
				{
					_putchar('0' + (product / 10));
					_putchar('0' + (product % 10));
				}
				if (num < n)
				{
				_putchar(',');
				_putchar(' ');
				}
				num++;
			}
			_putchar('\n');
			num++;
		}
	}
}
