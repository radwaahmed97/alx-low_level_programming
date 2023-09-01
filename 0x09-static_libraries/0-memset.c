#include <stdio.h>
#include "main.h"

/**
 * _memset - fills the first n bytes of the memory area
 *		pointed to by s with the constant byte b.
 *@n: first number bytes of memory
 *@s: pointer to n
 *@b: constant
 *
 *Return: a pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}

	return (s);
}

