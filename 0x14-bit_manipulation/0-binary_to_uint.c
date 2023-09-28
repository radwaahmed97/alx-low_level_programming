#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: pointing to a string of 1 and 0 characters.
 * Return: converted number if succuss, 0 otherwise.
 */

unsigned int binary_to_uint(const char *b)
{
	int index;
	unsigned int target;

	target = 0;
	if (!b)
		return (0);
	for (index = 0; b[index] != '\0'; index++)
	{
		if (b[index] != '0' && b[index] != '1')
			return (0);
	}
	for (index = 0; b[index] != '\0'; index++)
	{
		target <<= 1;
		if (b[index] == '1')
			target += 1;
	}
	return (target);
}
