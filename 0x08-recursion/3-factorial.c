#include <stdio.h>
#include "main.h"

/**
 * factorial - returns the factorial of a given number.
 * @n: given number to get factorial
 * Return: -1 if n is lower than 0,
 *		factorial otherwise.
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	if (n == 0)
	{
		return (1);
	}

	return (n * factorial(n - 1));
}

