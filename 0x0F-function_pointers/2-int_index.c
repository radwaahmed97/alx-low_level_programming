#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * int_index - searches for an integer.
 * @array: array of elements
 * @size: number of elements in the array.
 * @cmp: a pointer to the function used to compare values.
 * Return: the index of the first element for which
 *		the cmp function does not return 0, -1 otherwise.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}

	return (-1);
}

