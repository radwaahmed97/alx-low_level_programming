#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 * isNumber - checks if a string is a number
 * @s: string be checked
 * Return: 1 if number, 0 otherwise,
 */

int isNumber(char *s)
{
	int i;

	for (i = 0; s[i]; i++)
	{
		if (s[i] < '0' || s[i] > '9')
			return (0);
	}

	return (1);
}

/**
 * print_result - prints the result of the multiplication
 * @res: array of integers
 * @len: length of result
 * Return: void
 */

void print_result(int *res, int len)
{
	int i;

	for (i = 0; i < len && res[i] == 0; i++)
		;

	if (i == len)
		printf("0");

	for (; i < len; i++)
		printf("%d", res[i]);

	printf("\n");
}

/**
 * main - multiplies two positive numbers
 * @ac: arguments counter
 * @av: argument vector
 * Return: 0
 */

int main(int ac, char **av)
{
	int i, j, num1_len, num2_len;
	int *res;

	if (ac != 3 || !isNumber(av[1]) || !isNumber(av[2]))
	{
		printf("Eroor\n");
		exit(98);
	}

	num1_len = strlen(av[1]);
	num2_len = strlen(av[2]);

	res = calloc(num1_len + num2_len, sizeof(int));

	if (res == NULL)
	{
		printf("Error\n");
		exit(98);
	}

	for (i = num1_len - 1; i >= 0; i--)
	{
		for (j = num2_len - 1; j >= 0; j--)
		{
			int mul = (av[1][i] - '0') * (av[2][j] - '0');

			int sum = res[i + j + 1] + mul;

			res[i + j] += sum / 10;

			res[i + j + 1] = sum % 10;
		}
	}

	print_result(res, num1_len + num2_len);
	free(res);

	return (0);
}

