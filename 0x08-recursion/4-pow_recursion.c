#include "main.h"
/**
*_pow_recursion - calculate the value of x raised to the power of y
*@x: the value to raise
*@y: the power
*Return: the result
**/
int _powPrecursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y-1));
}
