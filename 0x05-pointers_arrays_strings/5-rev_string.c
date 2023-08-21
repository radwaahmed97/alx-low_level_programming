#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * rev_string -  reverses a string.
 *
 * @s: character to be reversed
 * Return: reversed character
 */

void rev_string(char *s)
{
	int i = 0, j, k;
	char *string, temp;

	while (i >= 0)
	{
		if (s[i] == '\0')

			break;
		i++;
	}
	string = s;

	for (j = 0; j < (i - 1); j++)
	{

		for (k = j + 1; k > 0; k--)
		{
			temp = *(string + k);
			*(string + k) = *(string + (k - 1));
			*(string + (k - 1)) = temp;
		}
	}
}

