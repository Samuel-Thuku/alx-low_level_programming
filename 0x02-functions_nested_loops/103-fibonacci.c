#include <stdio.h>
/**
*main - Entry point
*
*Return: Always 0 (Success)
*/
int main(void)
{
	int num1;
	long int num2, num3, num4;

	num2 = 1;
	num3 = 2;
	num4 = num3;
	while (num2 + num3 < 4000000)
	{
		num3 = num3 + num2;
		if ((num3 % 2) == 0)
		{
			num4 = num4  + num3;
		}
		num2 = num3 - num2;
		num1++;
	}
	printf("%ld\n", num4);
	return (0);
}
