#include <stdio.h>
/**
*main - Entry point
*
*Return: Always 0 (Success)
*/
int main(void)
{
	int num1;
	unsigned long int num2, num3, num4, num2_1, num2_2, num3_1;
	unsigned long int num3_2, num4_1, num4_2;

	num2 = 0;
	num3 = 1;
	for (num1 = 0; num1 < 92; num1++)
	{
		num4 = num2 + num3;
		printf("%lu, ", num4);
		num2 = num3;
		num3 = num4;
	}
	num2_1 = num2 / 10000000000;
	num2_2 = num2 % 10000000000;
	num3_1 = num3 / 10000000000;
	num3_2 = num3 % 10000000000;
	for (num1 = 92; num1 < 98; num1++)
	{
		num4_1 = num2_1 + num3_1;
		num4_2 = num2_2 + num3_2;
		if ((num2_2 + num3_2) > 999999999)
		{
			num4_1 = num4_1 + 1;
			num4_2 = num4_2 % 10000000000;
		}
		printf("%lu%lu", num4_1, num4_2);
			if (num1 < 97)
			{
				printf(", ");
			}
			num2_1 = num3_1;
			num2_2 = num3_2;
			num3_1 = num4_1;
			num3_2 = num4_2;
	}
	printf("\n");
	return (0);
}
