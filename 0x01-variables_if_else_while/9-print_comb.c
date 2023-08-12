#include <stdio.h>
#include <ctype.h>

/**
 * main - prints all possible combinations of single-digit numbers.
 *
 * Return: 0 if success
 */

int main(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		putchar((i % 10) + '0');
		if (i == 9)
		{
			continue;
		}
		putchar(',');
		putchar(' ');
	}

	putchar('\n');

	return (0);
}
