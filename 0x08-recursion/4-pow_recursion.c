#include <stdio.h>
#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @x: number to be power of y
 * @y: power value
 * Return: -1 if y is lower than 0,
 *		the value of x raised to power y otherwise.
 */

int _pow_recursion(int x, int y)
{
	int res = x;

	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}

	res *= _pow_recursion(x, y - 1);

	return (res);
}
