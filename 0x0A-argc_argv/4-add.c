#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints addition of 2 numbers
 * @argc: argument counter
 * @argv: argument vector
 * Return: 0
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	int i, j, res = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				return (printf("Error\n"), 1);
			}
		}

		res += atoi(argv[i]);
	}

	printf("%d\n", res);

	return (0);
}

