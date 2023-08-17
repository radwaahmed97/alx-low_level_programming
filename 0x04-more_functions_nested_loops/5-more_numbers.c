#include <stdio.h>
#include "main.h"

/**
 * more_numbers - print 10 times the numbers from 0 to 14
 *
 */

void more_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		int j;

		for (j = 0; j <= 14; j++)
		{
			_putchar((j % 10) + '0');
		}
		_putchar ('\n');
	}
}

