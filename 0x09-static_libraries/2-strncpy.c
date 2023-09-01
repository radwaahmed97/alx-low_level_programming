#include <stdio.h>
#include "main.h"

/**
 * *_strncpy - copies a string
 * @dest: copy to
 * @src: copy from
 * @n: number of characters
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i1;

	for (i1 = 0; src[i1] != '\0'; i1++)
	{
		if (i1 < n)
		{
			dest[i1] = src[i1];
		}
	}

	while (i1 < n)
		dest[i1++] = '\0';

	return (dest);
}

