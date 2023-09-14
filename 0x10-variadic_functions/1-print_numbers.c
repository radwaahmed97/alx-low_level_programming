#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_numbers - prints numbers, followed by a new line.
 * @separator: separator printed between numbers
 * @n: number of integers passed to the function
 * Return: nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int j;

	va_list array_of_numbers;

	va_start(array_of_numbers, n);

	for (i = 0; i < n; i++)
	{
		j = va_arg(array_of_numbers, int);
		printf("%d", j);

		if (i < (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(array_of_numbers);
}

