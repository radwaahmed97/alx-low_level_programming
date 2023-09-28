#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n: number unsigned long integer
 * @index: given index
 * Return: 1 if worked, -1 if not.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n &= ~(1UL << index);

	return (1);
}
