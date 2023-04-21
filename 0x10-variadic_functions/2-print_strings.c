#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
*print_strings - a function that prints strings followed by a new line.
*@separator: is the string to be printed between the strings.
*@n: the number of strings passed to the function.
**/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list listStrings;
	char *string;
	unsigned int num;

	va_start(listStrings, n);
	for (num = 0; num < n; num++)
	{
		string = va_arg(listStrings, char *);
		if (string == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", string);
		}
		if (num != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(listStrings);
}
