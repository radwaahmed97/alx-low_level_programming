#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"


/**
 * print_char - prints character
 * @ap: va_list containing character to be printed
 */

void print_char(va_list ap)
{
	printf("%c", va_arg(ap, int));
}


/**
 * print_integer - prints integer
 * @ap: va_list containing integers to be printed
 */

void print_integer(va_list ap)
{
	printf("%d", va_arg(ap, int));
}


/**
 * print_float - prints float
 * @ap: va_list containing floats to be printed
 */

void print_float(va_list ap)
{
	printf("%f", va_arg(ap, double));
}


/**
 * print_string - prints string
 * @ap: va_list containing strings to be printed
 */

void print_string(va_list ap)
{
	char *s = va_arg(ap, char *);

	printf("%s", s == NULL ? "(nil)" : s);
}


/**
 * print_all - prints everything
 * @format: list of types of arguments passed to function
 */

void print_all(const char * const format, ...)
{
	va_list ap;

	int i = 0, j;
	char *separator = "";

	print_t print[] = {
		{"c", print_char},
		{"i", print_integer},
		{"f", print_float},
		{"s", print_string},
		{NULL, NULL}
	};

	va_start(ap, format);

	while (format && format[i])
	{
		j = 0;

		while (j < 4 && format[i] != print[j].param[0])
			++j;

		if (j < 4)
		{
			printf("%s", separator);
			print[j].f(ap);
			separator = ", ";
		}
		++i;
	}

	printf("\n");
	va_end(ap);
}

