#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints min number of coins making change
 * @argc: arguments counter
 * @argv: arguments vector
 * Return: 0
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	int i, cents, coins = 0;
	int denominations[5];
	int num_denominations;

	if (argc != 2)
		return (printf("Error\n"), 1);

	cents = atoi(argv[1]);

	if (cents < 0)
		return (printf("0\n"), 0);

	denominations[0] = 25;
	denominations[1] = 10;
	denominations[2] = 5;
	denominations[3] = 2;
	denominations[4] = 1;

	num_denominations = sizeof(denominations) / sizeof(int);

	for (i = 0; i < num_denominations && cents; i++)
	{
		coins += cents / denominations[i];
		cents %= denominations[i];
	}

	printf("%d\n", coins);
	return (0);
}
