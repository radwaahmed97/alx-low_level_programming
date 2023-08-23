#include <stdio.h>
#include "main.h"

/**
 * *rot13 - encodes a string using rot13.
 * @s: character encoded
 * Return: pointer to encoded s
 */

char *rot13(char *s)
{
	int i1 = 0, i2;
	char alpha[52] = {
		'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H',
		'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P',
		'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X',
		'Y', 'Z', 'a', 'b', 'c', 'd', 'e', 'f',
		'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n',
		'o', 'p', 'q', 'r', 's', 't', 'u', 'v',
		'w', 'x', 'y', 'z'
	};
	char rot13[52] = {
		'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U',
		'V', 'W', 'X', 'Y', 'Z', 'A', 'B', 'C',
		'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K',
		'L', 'M', 'n', 'o', 'p', 'q', 'r', 's',
		't', 'u', 'v', 'w', 'x', 'y', 'z', 'a',
		'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i',
		'j', 'k', 'l', 'm'
	};

	while (s[i1])
	{
		for (i2 = 0; i2 < 52; i2++)
		{

			if (s[i1] == alpha[i2])
			{
				s[i1] = rot13[i2];
				break;
			}
		}
		i1++;
	}

	return (s);
}
