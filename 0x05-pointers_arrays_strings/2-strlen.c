#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strlen - returns the length of a string.
 *
 * @s: string to be lengthen
 */

int _strlen(char *s)
{
	int length = 0;

	while (*(s + length) != '\0')
		length++;
	return (length);

}
