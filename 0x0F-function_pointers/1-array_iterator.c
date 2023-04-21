#include "function_pointers.h"
/**
*array_iterator - a function given as a parameter on each element of an array.
*@array: the array holding the elements.
*@size: size of the array
*@action: a pointer to the function
*Return: void
**/
void array_iterator(int *array, size_t size, void (*action) (int))
{
	unsigned int num;

	if (array == NULL || action == NULL)
	{
		return;
	}
	for (num = 0; num < size; num++)
	{
		action(array[num]);
	}
}
