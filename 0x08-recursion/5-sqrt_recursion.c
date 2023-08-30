#include <stdio.h>
#include "main.h"
/**
 * isqrt - function to check for square root
 * @n: number to check for square root
 * @i: square root
 * Return: 1 is square root is found, -1 if not found.
 */

int isqrt(int n, int i)
{
	if (i * i > n)
	{
		return (-1);
	}

	if (i * i == n)
	{
		return (i);
	}

	return (isqrt(n, i + 1));
}


/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: number to get square root for it
 * Return: -1 if n doesn't have a natural square root,
 *		square root otherwise.
 */

int _sqrt_recursion(int n)
{
	int sq = 2;

	if (n < 0)
	{
		return (-1);
	}

	else if (n == 0 || n == 1)
	{
		return (n);
	}

	return (isqrt(n, sq));
}

