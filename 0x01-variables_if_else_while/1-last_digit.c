#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
*main - Entry point
*
*Return: Always 0 (Success)
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	int num;

	num = n % 10;
	printf("Last digit of %d is %d ", n, num);
	if (num > 5)
	{
		printf("and is greater than 5");
	}
	else if (num == 0)
	{
		printf("and is 0");
	}
	else if (num < 6 && != 0)
	{
		printf("and is less than 6 and not 0");
	}
	return (0);
}
