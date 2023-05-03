#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
*main - Prints the sum of args positive numbers
*@argc: argument count
*@argv: argument vector
*Return: Always zero
*/
int main(int argc, char *argv[])
{
	int num1;
	unsigned int num2, sum = 0;
	char *a;

	if (argc > 1)
	{
		for (num1 = 1; num1 < argc; num1++)
		{
			a = argv[num1];
			for (num2 = 0; num2 < strlen(a); num2++)
			{
				if (a[num2] < 48 || a[num2] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(a);
			a++;
		}
		printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}
