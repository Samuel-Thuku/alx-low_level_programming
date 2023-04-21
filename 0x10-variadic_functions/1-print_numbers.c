#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
*print_numbers - print numbers followed by a new line.
*@separator: the string to be printed between numbers.
*@n: the number of integers passed to the function.
*@... : a variable number of numbers to be printed.
**/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list listNums;
	unsigned int num;

	va_start(listNums, n);
	for (num = 0; num < 0; num++)
	{
		printf("%d", va_arg(listNums, int));
		if (num != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(listNums);
}
