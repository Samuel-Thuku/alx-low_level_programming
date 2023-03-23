#include "main.h"
/**
*print_triangle - prints a triangle
*@size: size of triangle
*
*/
void print_triangle(int size)
{
	int num1, num2, num3;

	num1 = 0;
	num2 = size - 1;
	while (num1 < size)
	{
		num2 = size - 1 - num1;
		num3 = num1 + 1;
		while (num2 > 0)
		{
			_putchar(' ');
			num2--;
		}
		while (num3 > 0)
		{
			_putchar('#');
			num3--;
		}
		_putchar('\n');
		num1++;
	}

	if (size <= 0)
	{
		_putchar('\n');
	}
}
