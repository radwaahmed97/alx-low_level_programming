#include <stdio.h>
#include "variadic_functions.h"
#include <stdlib.h>

/**
 * print_strings - prints strings, followed by a new line
 * @separator: string to be printed between the strings
 * @n: number of strings passed to the function
 * Return: nil if one the string is NULL, strings otherwise.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *s;

	va_list array_of_strings;

	va_start(array_of_strings, n);

	for (i = 0; i < n; i++)
	{
		s = va_arg(array_of_strings, char *);

		if (s == NULL)
			printf("nil");

		printf("%s", s);

		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(array_of_strings);
}

