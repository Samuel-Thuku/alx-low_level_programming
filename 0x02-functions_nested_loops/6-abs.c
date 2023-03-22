#include "main.h"
/**
 * _abs - determines the absolute value of an integer
 *
 *@int: - absolute the true value computed
 *
 *Return: absolute value
 *
 */
int _abs(int num)
{
	int absolute;

	if (num < 0)
	{
		absolute = num * -1;
	}
	else
	{
		absolute = num;
	}
	return (absolute);
}
