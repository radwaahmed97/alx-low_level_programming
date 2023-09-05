#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid -  returns a pointer to a 2 dimensional array of integers.
 * @width: first dimensional of grid, -width-
 * @height: second dimensional of grid, -height-
 * Return: NULL on failure and if height or width = negative,
 *		a pointer to a 2 dimentional array of integers otherwise.
 */

int **alloc_grid(int width, int height)
{
	int i, j, row, col;
	int **p;

	if (width <= 0 || height <= 0)
		return (NULL);

	p = (int **)malloc(height * sizeof(int *));

	if (p == 0)
	{
		free(p);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		p[i] = (int *)malloc(width * sizeof(int));

		if (p[i] == 0)
		{
			for (j = 0; j <= i; j++)
			{
				free(p[j]);
			}
			free(p);
			return (NULL);
		}
	}

	for (row = 0; row < height; row++)
	{
		for (col = 0; col < width; col++)
		{
			p[row][col] = 0;
		}
	}
	return (p);
}

