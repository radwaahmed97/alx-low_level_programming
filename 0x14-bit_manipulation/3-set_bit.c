#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index.
 * @n: integer number
 * @index: given index
 * Return: 1 if worked, -1 if ERROR occured
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
	{
		return (-1);
	}

	*n |= (1UL << index);

	return (1);
}
