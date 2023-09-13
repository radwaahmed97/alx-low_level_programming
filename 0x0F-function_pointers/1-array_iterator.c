#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_iterator - executes a function given as a parameter
 *		on each element of an array.
 * @array: array to execute func on
 * @size: the size of array
 * @action: pointer to the function u need to use
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && action)
	{
		i = 0;

		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}

