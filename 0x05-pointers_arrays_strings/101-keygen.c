#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - program that generates random valid
 * passwords for the program 101-crackme
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num1[100];
	int num2, num3, num4;

	num3 = 0;	

	srand(time(NULL));

	for (num2 = 0; num2 < 100; num2++)
	{
		num1[num2] = rand() % 78;
		num3 += (num1[num2] + '0');
		putchar(num1[num2] + '0');
		if ((2772 - num3) - '0' < 78)
		{
			num4 = 2772 - num3 - '0';
			num3 += num4;
			putchar(num4 + '0');
			break;
		}
	}

	return (0);
}
