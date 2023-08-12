
#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits.
 *
 * Return: 0 if success
 */

int main(void)
{
	int i;
	int j;

	for (i = 0; i < 9; i++)
	{
		for (j = i + 1; j < 10; j++)
		{
			putchar((i % 10) + '0');
			putchar((j % 10) + '0');

			if ((i == 8 && j == 9))
			{
				continue;
			}

			putchar(',');
			putchar(' ');
			}
	}

	return (0);

}
