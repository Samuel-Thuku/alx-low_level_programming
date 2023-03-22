#include <stdio.h>
/**
*main - Entry point
*
*Return: Always 0 (Success)
*/
int main(void)
{
	int num1;
	long int num2, num3, num4, num5;

	num2 = 0;
	num3 = 1;
	for (num1 = 0; num5 <= 4000000; num1++)
	{
		num4 = num2 + num3;
		if ((num4 % 2) == 0)
		{
			num5 = 0 + num4;
		}
		num2 = num3;
		num3 = num4;
	}
	printf("%ld", num5);
	printf("\n");
	return (0);
}
