#include <stdio.h>
#include "main.h"

/**
 * print_chessboard - prints the chessboard.
 * @a: array of characters
 * Return:
 */

void print_chessboard(char (*a)[8])
{
	int i1;
	int i2;

	for (i1 = 0; a[i1][7]; i1++)
	{
		for (i2 = 0; i2 < 8; i2++)
		{
			_putchar(a[i1][i2]);
		}

		_putchar('\n');
	}
}

