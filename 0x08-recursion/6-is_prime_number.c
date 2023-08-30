#include <stdio.h>
#include "main.h"

/**
 * is_prime_check - checks for number prime
 * @x: integer number
 * @y: integer number
 * Return: integer
 */

int is_prime_check(int x, int y)
{
	if (y < 2 || y % x == 0)
	{
		return (0);
	}
	else if (x > y / 2)
	{
		return (1);
	}
	else
	{
		return (is_prime_check(x + 1, y));
	}
}

/**
 * is_prime_number - returns 1 if the input integer is a prime number,
 *		otherwise return 0
 *@n: number to be checked
 *Return: 1 if prime number, 0 otherwise.
 */

int is_prime_number(int n)
{
	if (n == 2)
	{
		return (1);
	}

	return (is_prime_check(2, n));
}
