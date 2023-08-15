#include <stdio.h>
#include "main.h"
#include <ctype.h>


/**
 * print_alphabet - prints the alphabet, in lowercase, followed by a new line
 *
 * Return: 0 if success
 */

void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(tolower(letter));
	}
	_putchar('\n');
}

