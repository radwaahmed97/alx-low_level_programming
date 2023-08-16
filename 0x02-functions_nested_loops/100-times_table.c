#include <stdio.h>
#include "main.h"

/**
 * print_times_table - prints the n times table,starting with 0
 *
 *
 * @n: The value of the times table to be printed
 */
void print_times_table(int n)
{
	int num, multiple, res;

	if (n >= 0 && n < 15)

	{
		for (num = 0; num <= n; num++)

		{
			_putchar('0');

			for (multiple = 1; multiple <= n; multiple++)

			{
				_putchar(',');
				_putchar(' ');

				res = num * multiple;

				if (res <= 99)

				{
					_putchar (' ');
				}

				if (res <= 9)

				{
					_putchar(' ');
				}

				if

					(res >= 100)
				{
					_putchar((res / 100) + '0');
					_putchar(((res / 10)) % 10 + '0');

				}

				else if (res <= 99 && res >= 10)

					_putchar((res / 10) + '0');

				_putchar((res % 10) + '0');
			}

			_putchar('\n');
		}
	}
}
