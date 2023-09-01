#include <stdio.h>
#include "main.h"

/**
 * *_strcat -  concatenates two strings
 * @dest: string
 * @src: string appended to dest.
 * Return: a pointer to the resulting string dest.
 */

char *_strcat(char *dest, char *src)
{
	int i1;
	int i2;

	i1 = 0;
	i2 = 0;

	while  (dest[i1] != '\0')
	{
		i1++;
	}

	while (src[i2] != '\0')
	{
		dest[i1] = src[i2];
		i2++;
		i1++;
	}

	dest[i1] = '\0';
	return (dest);
}
