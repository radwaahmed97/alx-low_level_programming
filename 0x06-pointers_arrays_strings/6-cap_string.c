#include <stdio.h>
#include "main.h"

/**
 * _islower - check lowercase of string
 * @c: character to check
 * Return: 1 if lowercase,
 *		0 otherwise
 */

int _islower(int c)
{
	return (c >= 'a' && c <= 'z');
}

/**
 * _isseparator - checks if a character is a separator
 * @c: character to check
 * Return: 1 if separator,
 *		0 otherwise
 */

int _isseparator(char c)
{
	return (c == ' ' || c == '\t' || c == '\n' || c == ',' || c == ';'
			|| c == '.' || c == '!' || c == '?' || c == '"'
			|| c == '(' || c == ')' || c == '{' || c == '}');
}

/**
 * cap_string - capitalizes all words of a string
 * @s: string to capitalize
 * Return: pointer to string s
 */

char *cap_string(char *s)
{
	int i;

	for (i = 0; s[i]; ++i)

		if (i == 0 || _isseparator(s[i - 1]))
			(_islower(s[i])) ? s[i] -= 32 : 0;

	return (s);
}
