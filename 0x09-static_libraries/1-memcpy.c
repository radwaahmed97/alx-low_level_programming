#include <stdio.h>
#include "main.h"

/**
 * _memcpy - copies n bytes from memory
 *		area src to memory area dest.
 *@n: number of bytes from memory
 *@src: source memory area
 *@dest: destination memory area
 *
 *Return: a pointer to dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
