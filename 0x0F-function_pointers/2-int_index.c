#include "function_pointers.h"
/**
*int_index -  a function that searches for an integer.
*@array: the array holding the elements
*@cmp: pointer to function
*@size: number of elements in the array
*Return: if no element matches -1, if size <= 0 -1
**/
int int_index(int *array, int size, int (*cmp)(int))
{
	int num;

	if (array == NULL || size <= 0 || cmp == NULL)
	{
		return (-1);
	}
	for (num = 0; num < size; num++)
	{
		if (cmp(array[num]))
		{
			return (num);
		}
	}
	return (-1);
}
