#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 *print_alphabet_x10 - prints 10 times the alphabet,
 *		in lowercase, followed by a new line
 * Return: 0 if success
 */

void print_alphabet_x10(void)
{
	char letter;
	int count;

	for (count = 1; count <= 10; count++)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(tolower(letter));
		}
		_putchar('\n');
	}

}

