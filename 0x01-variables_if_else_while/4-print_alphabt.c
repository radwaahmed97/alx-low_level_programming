
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
		if (ch != 'q' || ch != 'e')
		{
			putchar(tolower(ch));
		}
	}

	putchar('\n');
	return (0);

}
