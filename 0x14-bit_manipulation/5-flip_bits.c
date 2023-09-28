#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip
 *			to get from one number to another.
 * @n: first number
 * @m: second number
 * Return: number of bits needs git flipped
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff, res;
	unsigned int x, y;

	y = 0;
	res = 1;
	diff = n ^ m;

	for (x = 0; x < (63); x++)
	{
		if (res == (diff & res))
			y++;
		res <<= 1;
	}
	return (y);
}
