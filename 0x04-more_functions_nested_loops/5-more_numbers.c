#include "main.h"
/**
 *more_numbers - prints 10 times the numbers from 0 to 14
 *
 */
void more_numbers(void)
{
	int num1, num2;

	for (num1 = 0; num1 < 10; num1++)
	{
		for (num2 = 0; num2 < 15; num2++)
		{
			num3 = num2 / 10;
			num4 = num2 % 10;
			if (num2 > 9)
			{
				_putchar('0' + num3);
			}
			_putchar('0' + num4);
		}
		_putchar('\n');
	}
}
