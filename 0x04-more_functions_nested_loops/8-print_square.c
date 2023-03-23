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

	for (num1 = 0; num1 < size; num1++)
	{
		for (num2 = 0; num2 < size; num2++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
