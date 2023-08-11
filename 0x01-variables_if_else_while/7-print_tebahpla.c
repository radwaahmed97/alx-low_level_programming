
#include <stdio.h>
#include <ctype.h>

/**
 * main - prints the alphabet in lowercase in reverse.
 * Return: 0 if success
 */

int main(void)

{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(tolower(ch));
	}

	putchar('\n');
	return (0);
}
