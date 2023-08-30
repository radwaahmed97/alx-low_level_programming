#include <stdio.h>
#include "main.h"

/**
 * _strlen_recursion - Prints the length of a string.
 * @s: string to be printed
 * Return: string length
 */
int _strlen_recursion(char *s)
{
	if (s[0] != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}

	return (0);
}

/**
 * palindrome_check - checks if palindrome
 * @s: string checked
 * @r: right index
 * @l: left index
 * Return: 1 if palindrome, 0 otherwise
 */

int palindrome_check(char *s, int l, int r)
{
	if (s[l] == s[r])
	{
		if (l > r / 2)
		{
			return (1);
		}

		else
		{
			return (palindrome_check(s, l + 1, r - 1));
		}
	}
	else
	{
		return (0);
	}
}

/**
 * is_palindrome - returns 1 if a string is a palindrome and 0 if not.
 * @s: string to be checked
 * Return: 1 if palindrome,
 *		0 otherwise.
 */

int is_palindrome(char *s)
{
	return (palindrome_check(s, 0, _strlen_recursion(s) - 1));
}
