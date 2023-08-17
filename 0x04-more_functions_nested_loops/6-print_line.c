#include <stdio.h>
#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @n: number of times the character - should be printed
 *
 */

void print_line(int n)
{
	int length;

	if (n > 0)
	{
		for (length = 0; length < n; length++)

			_putchar('-');

	}
	_putchar('\n');
}

