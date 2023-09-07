#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: elements
 * @size: size
 * Return: a pointer to the allocated memo,
 *		NULL when nmemb or size = 0 or when failure.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *res;
	unsigned int i;

	if (nmemb == 0 ||
			size == 0)
		return (NULL);

	res = malloc(nmemb * size);

	if (res == NULL)
		return (NULL);

	for (i = 0; i < nmemb * size; i++)
		res[i] = 0;

	return (res);
}

