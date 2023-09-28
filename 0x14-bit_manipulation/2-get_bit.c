#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: number to get values from
 * @index: target position index
 * Return: values of a bit at a given index, -1 if ERROR
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);
	return (n >> index & 1);
}
