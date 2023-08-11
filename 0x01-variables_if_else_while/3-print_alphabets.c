
#include <stdio.h>
#include <ctype.h>

/**
 * main - prints the alphabet in lowercase.
 * Return: 0 if success
 */

int main(void)

{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(tolower(ch));
	}

	for (ch = 'A'; ch <= 'Z'; ch++)
	{
		putchar(toupper(ch));
	}

	putchar('\n');
	return (0);

}
