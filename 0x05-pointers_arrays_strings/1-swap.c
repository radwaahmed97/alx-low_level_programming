#include "main.h"

/**
 * swap_int - swaps the values of two integers
 *
 * @a: first integer to be swaped
 * @b: second integer to be swaped
 *
 */

void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

