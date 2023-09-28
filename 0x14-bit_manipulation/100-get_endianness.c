#include "main.h"

/**
 * get_endianness - checks the endianness.
 * Return: 0 if big endian, 1 if little
 */

int get_endianness(void)
{
	unsigned int x = 1;
	char *b = (char *) &x;

	if (*b)
		return (1);
	else
		return (0);
}
