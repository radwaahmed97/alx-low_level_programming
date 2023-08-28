#include <stdio.h>
#include "main.h"

/**
 * set_string -  sets the value of a pointer to a char.
 * @s: double pointer
 * @to: change value of pointer to it
 * Return: nothing
 */

void set_string(char **s, char *to)
{
	*s = to;
}

