#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * array_range - creates an array of integers
 * @min: min integer
 * @max: max integer
 * Return: pointer to the newly created array,
 *		NULL if min > max or when failure.
 */

int *array_range(int min, int max)
{
	unsigned int arr_size, i;
	int *new_arr;

	if (min > max)
		return (NULL);

	arr_size = max - min;
	new_arr = malloc(sizeof(int) * (arr_size + 1));

	if (new_arr == NULL)
		return (NULL);

	for (i = 0; i < arr_size; i++)
	{
		new_arr[i] = i + min;
	}

	new_arr[arr_size] = max;
	return (new_arr);
}
