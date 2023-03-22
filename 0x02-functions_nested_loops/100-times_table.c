#include "main.h"
void print_times_table(int n)
{
	int num1, num2, product;

	for (num1 = 0; num1 <= n; num1++)
	{
		for (num2 = 0; num2 <= n; num2++)
		{
			product = num1 * num2;
			if (product < 10)
			{
				if (num2 > 0 && num2 <= n)
				{
					_putchar(' ');
					_putchar(' ');
				}
				_putchar('0' + product);
			}
		}
	}
}
