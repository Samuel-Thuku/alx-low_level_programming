#include "main.h"
/**
 *print_square - prints a square
 *@size: is the size of the square
 */
void print_square(int size)
{
	if (size < 1)
	{
		_putchar('\n');
	}
	int num1, num2;

	for (num1 = size; num > 0; num--)
	{
		for (num2 = size; num > 0; num--)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
