#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars,
 *		and initializes it with a specific char.
 * @size: size of charcter
 * @c: character
 * Return: NULL if size is 0 or fails,
 *		a pointer to the array if success.
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int index;

	if (size == 0)
		return (NULL);

	arr = malloc(sizeof(char) * size);

	if (arr == NULL)
		return (NULL);

	for (index = 0; index < size; index++)
		arr[index] = c;
	return (arr);
}

