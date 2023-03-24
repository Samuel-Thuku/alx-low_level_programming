#include <stdio.h>
#include <math.h>/**
*main - Entry point
*
*Return: Always 0 (Success)
*/
int main(void)
{
	long num1, num2, number;
	double square;

	number = 612852475143;
	square = sqrt(number);
	for (num1 = 1; num1 <= square; num1++)
	{
		if (number % num1 == 0)
		{
			num2 = number / num1;
		}
	}
	printf("%ld\n", num2);
	return (0);
}
