#include "main.h"

/**
 * print_binary -  prints the binary representation of a number.
 * @n: number to be printed it's binary representation
 */

void print_binary(unsigned long int n)
{
	int x, counter = 0;
	unsigned long int present;

	for (x = 63; x >= 0; x--)
	{
		present = n >> x;

		if (present & 1)
		{
			_putchar('1');
			counter++;
		}
		else if (counter)
			_putchar('0');
	}
	if (!counter)
		_putchar('0');
}
