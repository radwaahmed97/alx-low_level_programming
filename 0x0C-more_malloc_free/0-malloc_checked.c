#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc.
 * @b: bytes to allocate
 * Return: a pointer to the allocated memory,
 *		if failure should cause normal
 *		process termination with a status value of 98.
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}

	return (ptr);
}
