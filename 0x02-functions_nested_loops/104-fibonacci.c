#include <stdio.h>
/**
*main - Entry point
*
*Return: Always 0 (Success)
*/
int main(void)
{
	int num1;
	long long int num2, num3, num4;

	num2 = 0;
	num3 = 1;
	for (num1 = 0; num1 < 99; num1++)
	{
		num4 = num2 + num3;
		printf("%lld", num4);
		if (num1 < 98)
		{
			printf(", ");
		}
		num2 = num3;
		num3 = num4;
	}
	printf("\n");
	return (0);
}
