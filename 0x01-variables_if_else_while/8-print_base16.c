
#include <stdio.h>
#include <ctype.h>

/**
 * main - prints all numbers of base 16 in lowercase.
 * Return: 0 if success
 */

int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		putchar((n % 10) + '0');
	}
	for (n = 'A'; n <= 'F'; n++)
	{
		putchar(tolower(n));
	}
	putchar('\n');
	return (0);
}
