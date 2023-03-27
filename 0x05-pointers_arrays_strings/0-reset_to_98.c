#include "main.h"
/**
*reset_to_98 - a function that updates the value it points to to 98.
*@n: the numeber being changed.
*Return: the new value of n.
*/
void reset_to_98(int *n)
{
	int *num;

	*num = &n;
	*num = 98;
	return (n);
}
