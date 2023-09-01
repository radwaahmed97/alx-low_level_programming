#include <stdio.h>

/**
 * main - prints it's name, followed by a newline.
 * @argc: argument counter
 * @argv: argumnet vector
 * Return: 0
 */

int main(__attribute__((unused)) int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}

