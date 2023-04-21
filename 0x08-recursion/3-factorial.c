#include "main.h"
/**
*factorial - calculates the factorial of a number
*@n: the number to calculate the factorial
*Return: the factorial
*/
int factorial(int n)
{
	if (n < 0)
	{
		return (-);
	}
	if (n <= 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
