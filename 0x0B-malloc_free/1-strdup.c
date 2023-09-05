#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 *	which contains a copy of the string given as a parameter.
 * @str: string
 * Return: a pointer to a new string duplicated from str,
 *		NULL if str = NULL or failure.
 */

char *_strdup(char *str)
{
	char *duplicate;
	int index, len = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[len] != '\0')
	{
		len++;
	}

	duplicate = (char *)malloc((sizeof(char) * len) + 1);

	if (duplicate == NULL)
		return (NULL);

	for (index = 0; index < len; index++)
	{
		duplicate[index] = str[index];
	}

	duplicate[len] = '\0';

	return (duplicate);
}

