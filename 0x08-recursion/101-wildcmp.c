#include <stdio.h>
#include "main.h"

/**
 * wildcmp - compares two strings
 *		and returns 1 if the strings can be considered identical,
 *		otherwise return 0.
 * @s1: first string to be compared
 * @s2: second string to be compared
 * Return: 1 if string identical,
 *		0 otherwise.
 */

int wildcmp(char *s1, char *s2)
{
	if (!*s1 && !*s2)
	{
		return (1);
	}
	if (*s2 == '*')
	{
		return (wildcmp(s1, s2 + 1) ||
				(*s1 != '\0' && wildcmp(s1 + 1, s2)));
	}
	if (*s1 == *s2)
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}
	return (0);
}

