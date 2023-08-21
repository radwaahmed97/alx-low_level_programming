#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * print_rev - prints a string, in reverse, followed by a new line.
 *
 * @s: character to be reversely printed
 * Return: string in reverse
 */

void print_rev(char *s)
{
	int i = 0;

	while (i >= 0)
	{

		if (s[i] == '\0')

			break;
		i++;
	}

	for (i--; i >= 0; i--)

	{
		_putchar(s[i]);
	}
	_putchar('\n');
}

