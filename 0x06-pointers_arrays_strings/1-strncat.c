#include <stdio.h>
#include "main.h"

/**
 * *_strncat - concatenates two strings
 * @dest: string
 * @src: string to be appended to dest
 * @n: number of bites
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i1, i2;

	for (i1 = 0; dest[i1] != '\0'; i1++)
	{
	}

	for (i2 = 0; i2 < n; i2++)
	{
		dest[i2 + i1] = src[i2];

		if (src[i2] == '\0')
		{
			i2 = n;
		}
	}

	return (dest);
}

