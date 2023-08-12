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
		for (j = 0; j < 10; j++)
		{
			putchar((i % 10) + '0');
			putchar((j % 10) + '0');
			putchar(',' + ' ');
		}
	}
	putchar('\n');

	return (0);
}
