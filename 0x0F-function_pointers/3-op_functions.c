#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - add two integers
 * @a: 1st integer
 * @b: 2nd integer
 * Return: a + b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtract two integers
 * @a: 1st integer
 * @b: 2nd integer
 * Return: a - b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies two integers
 * @a: 1st integer
 * @b: 2nd integer
 * Return: a * b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides two integers
 * @a: 1st integer
 * @b: 2nd integer
 * Return: a / b
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}

/**
 * op_mod - gets remainder of division of two integers
 * @a: 1st integer
 * @b: 2nd integer
 * Return: a % b
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}
