#include <stdio.h>
#include "main.h"

/**
 * _swap - swaps the values of two integers
 * @a: pointer to an integer
 * @b: pointer to an integer
 */

void _swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

/**
 * reverse_array - reverses integers
 * @a: array of integers
 * @n: number of elements in the array
 */

void reverse_array(int *a, int n)
{
	int i1, i2;

	for (i1 = 0, i2 = n - 1; i1 < i2; i1++, i2--)
		_swap(&a[i1], &a[i2]);
}
