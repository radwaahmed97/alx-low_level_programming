#include <stdio.h>
#include "main.h"

/**
 * _strchr -  locates a character in a string.
 *
 *@s: string
 *@c: character
 *Return: a pointer to the first occurrence if found or
 *		NULL if not found
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}

	if (c == '\0')
	{
		return (s);
	}

	return (NULL);
}

