#include <stdio.h>
#include "main.h"

/**
 * print_number - prints an integer.
 * @n: integer to be printed
 *
 */

void print_number(int n)
{
	unsigned int no = n;

	if (n < 0)
	{
		_putchar('-');
		no = -n;
	}
	else
		no = n;

	if ((no / 10) > 0)
		print_number(no / 10);

	_putchar((no % 10) + '0');
}
