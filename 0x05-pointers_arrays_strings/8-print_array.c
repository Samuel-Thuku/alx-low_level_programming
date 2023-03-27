#include "main.h"
#include <string.h>
#include <stdio.h>
/**
*print_array - prints n elements of an array.
*@a: the array.
*@n: the number of elements to be displayed.
*/
void print_array(int *a, int n)
{
	int num1;

	for (num1 = 0; num1 < n; num1++)
	{
		printf("%d", a[num1]);
		if (num1 < (n - 1))
		{
			printf(", ");
		}
	}
	printf("\n");
}
