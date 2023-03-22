#include <stdio.h>
/**
*main - Entry point
*
*Return: Always 0 (Success)
*/
int main(void)
{
	int num1;
	unsigned long int num2, num3, num4;

	num2 = 0;
	num3 = 1;
	for (num1 = 0; num1 < 98; num1++)
	{
		if (num1 > 88)
		{
		printf("%lu", (num4 / 10000000000));
		printf("%lu", (num4 % 10000000000));
		}
		num4 = num2 + num3;
		if (num1 <= 88)
		{
		printf("%lu", num4);
		}
		if (num1 < 97)
		{
			printf(", ");
		}
		num2 = num3;
		num3 = num4;
	}
	printf("\n");
	return (0);
}
