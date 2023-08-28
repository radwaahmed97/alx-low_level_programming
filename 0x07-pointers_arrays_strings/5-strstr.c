#include <stdio.h>
#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: string searched in.
 * @needle: substring.
 * Return: a pointer to the beginning of the located substring,
 *		or NULL if the substring is not found.
 */

char *_strstr(char *haystack, char *needle)
{
	char *x;
	char *y;

	y = needle;

	if (*y == 0)
	{
		return (haystack);
	}

	for (; *haystack != 0; haystack += 1)
	{

		if (*haystack != *y)
		{
			continue;
		}

		x = haystack;

		while (1)
		{
			if (*y == 0)
			{
				return (haystack);
			}

			if (*x++ != *y++)
			{
				break;
			}

		}

		y = needle;

	}

	return (NULL);
}

