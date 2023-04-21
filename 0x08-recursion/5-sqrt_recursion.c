#include "mian.h"
#include <stdio.h>

/**
*_sqrt_recursion - the natural square root of a number
*@n: number to calculate the natural square root
*Return: the natural square root
**/
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
/**
*_sqrt - Calculates natural square root
*@num1: number to calculate the square root
*@num2: iterate number
*Return: the natural square root
 **/
int _sqrt(int num1, int num2)
{
	int sqrt = num2 * num2;

	if (sqrt > num1)
	{
		return (-1);
	}
	if (sqrt == num1)
	{
		return (num2);
	}
	return (_sqrt(num1, num2 + 1));
}
