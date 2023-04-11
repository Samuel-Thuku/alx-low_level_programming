#include "main.h"
#include <stdlib.h>

/**
  * alloc_grid - ...
  * @width: ...
  * @height: ...
  *
  * Return: ...
  */
int **alloc_grid(int width, int height)
{
	int num1, num2, num3, num4;
	int **num5;

	if (width <= 0 || height <= 0)
		return (NULL);

	num5 = malloc(sizeof(int *) * height);
	if (num5 == NULL)
	{
		free(num5);
		return (NULL);
	}
	for (num1 = 0; num1 < height; num1++)
	{
		num5[num1] = malloc(sizeof(int) * width);
		if (num5[num1] == NULL)
		{
			for (num2 = num1; num2 >= 0; num2--)
			{
				free(num5[num2]);
			}

			free(num5);
			return (NULL);
		}
	}

	for (num3 = 0; num3 < height; num3++)
	{
		for (num4 = 0; num4 < width; num4++)
		{
			num5[num3][num4] = 0;
		}
	}

	return (num5);
}
