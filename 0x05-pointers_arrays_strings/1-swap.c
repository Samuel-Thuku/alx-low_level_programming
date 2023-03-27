#include "main.h"
/**
*swap_int - a function that swaps the values of two integers.
*@a: the first number
*@b: the second value
*Return: the swappped numbers
*/
void swap_int(int *a, int *b)
{
	*a = b;
	*b = a;
}
