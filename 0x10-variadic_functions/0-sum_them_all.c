#include "variadic_functions.h"
#include <stdarg.h>
/**
*sum_them_all - a function that returns the sum of all parameters.
*@n: the number of parameters
*@...: the parameters to calculate the sum of.
*Return: if n==0, return 0
**/
int sum_them_all(const unsigned int n, ...)
{
	va_list list1;
	unsigned int num, sum;

	sum = 0;
	va_start(list1, n);
	for (num = 0; num < n; num++)
	{
		sum += va_arg(list1, int);
	}
	va_end(list1);
	return (sum);
}
