#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints multiplication of 2 numbers.
 * @argc: arguments counter
 * @argv: arguments vector
 * Return: 0
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	int i, mul = 1;

	if (argc > 1 && (argc - 1) == 2)
	{

		for (i = 1; i < argc; i++)
		{
			mul *= atoi(argv[i]);
		}
		printf("%d\n", mul);
	}

	else
	{
		printf("Error\n");

		return (1);
	}

	return (0);
}
