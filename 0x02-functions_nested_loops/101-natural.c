#include <stdio.h>
#include "main.h"
int multiples_3_and_5(int num1)
{
	int num2;

	for (num1 = 1024; num1 >= 0; num1--)
	{
		if ((num1 % 3) == 0 || (num1 % 5) == 0)
		{
			num2 = num2 + num1;
		}
	}
	return (num2);
}
