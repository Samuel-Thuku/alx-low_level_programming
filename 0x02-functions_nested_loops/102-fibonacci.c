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

	num2 = 0;
	num3 = 1;
	for (num1 = 0; num1 < 50; num1++)
	{
		num4 = num2 + num3;
		printf("%ld", num4);
		if (num1 < 49)
		{
			printf(", ");
		}
		num2 = num3;
		num3 = num4;
	}
	printf("\n");
	return (0);
}
