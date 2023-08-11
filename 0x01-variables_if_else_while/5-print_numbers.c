
#include <stdio.h>
#include <ctype.h>

/**
 * main - prints all single digit numbers of base 10.
 * Return: 0 if success
 */

int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		printf("%d", n);
	}
	printf("\n");
	return (0);
}
