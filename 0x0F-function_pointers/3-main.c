#include <stdio.h>
#include "3-calc.h"
#include <stdlib.h>

/**
 * main - ...
 * @argc: arguments counter
 * @argv: arguments vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int a, b, res;
	int (*oprt_func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	if ((argv[2][0] == '/' || argv[2][0] == '%') && b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	oprt_func = get_op_func(argv[2]);

	if (oprt_func == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	res = oprt_func(a, b);

	printf("%d\n", res);

	return (0);
}

