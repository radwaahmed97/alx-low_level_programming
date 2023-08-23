#include <stdio.h>
#include "main.h"

/**
 * add_strings - adds numbers stored in two strings.
 * @n1: first string to be stored in
 * @n2: second string to be stored in
 * @r: buffer the function will use to store the result
 * @r_index: buffer current index
 * Return: a pointer to the result if stored,
 *              0 otherwise.
 */

char *add_strings(char *n1, char *n2, char *r, int r_index)
{
	int nu, tens = 0;

	for (; *n1 && *n2; n1--, n2--, r_index--)
	{
		nu = (*n1 - '0') + (*n2 - '0');
		nu += tens;
		*(r + r_index) = (nu % 10) + '0';
		tens = nu / 10;
	}

	for (; *n1; n1--, r_index--)
	{
		nu = (*n1 - '0') + tens;
		*(r + r_index) = (nu % 10) + '0';
		tens = nu / 10;
	}

	for (; *n2; n2--, r_index--)
	{
		nu = (*n2 - '0') + tens;
		*(r + r_index) = (nu % 10) + '0';
		tens = nu / 10;
	}

	if (tens && r_index >= 0)
	{
		*(r + r_index) = (tens % 10) + '0';

		return (r + r_index);
	}

	else if (tens && r_index < 0)

		return (0);
	return (r + r_index + 1);
}
/**
 * *infinite_add - adds two numbers.
 * @n1: first number to be added
 * @n2: second number to be added
 * @r: buffer the function will use to store the result
 * @size_r: buffer size
 * Return: a pointer to the result if stored,
 *		0 otherwise.
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, n1_len = 0, n2_len = 0;

	for (i = 0; *(n1 + i); i++)
		n1_len++;

	for (i = 0; *(n2 + i); i++)
		n2_len++;

	if (size_r <= n1_len + 1 || size_r <= n2_len + 1)
		return (0);

	n1 += n1_len - 1;
	n2 += n2_len - 1;
	*(r + size_r) = '\0';

	return (add_strings(n1, n2, r, --size_r));
}

