#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
*print_all - a functions that prints everything.
*@format: list of types of arguments passed to the function.
**/
void print_all(const char * const format, ...)
{
	int num;
	char *string, *separator = "";
	va_list list1;

	num = 0;
	va_start(list1, format);
	if (format)
	{
		while (format[num])
		{
			switch (format[num])
			{
				case 'c':
				printf("%s%c", separator, va_arg(list1, int));
				break;
				case 'i':
				printf("%s%d", separator, va_arg(list1, int));
				break;
				case 'f':
				printf("%s%f", separator, va_arg(list1, double));
				break;
				case 's':
				string = va_arg(list1, char *);
				if (!string)
				{
					string = "(nil)";
				}
				printf("%s%s", separator, string);
				break;
				default:
				num++;
				continue;
			}
			separator = ",";
			num++;
		}
	}
	printf("\n");
	va_end(list1);
}
