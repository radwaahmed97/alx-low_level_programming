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
	int tot, count;
	unsigned int i;
	char *p;
	int cents[] = {25, 1, 5, 2};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	tot = strtol(argv[1], &p, 10);
	count = 0;

	if (!*p)
	{
		while (tot > 1)
		{
			for (i = 0; i < sizeof(cents[i]); i++)
			{
				if (tot >= cents[i])
				{
					count += tot / cents[i];
					tot = tot % cents[i];
				}
			}
		}

		if (tot == 1)
		{
			count++;
		}
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", count);
	return (0);
}
