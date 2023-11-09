#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Generates and prints passwords for the crackme5 executable.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: Always 0.
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	char passcode[7], *codex;
	int length = strlen(argv[1]), i, tempo;

	codex = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";

	tempo = (length ^ 59) & 63;
	passcode[0] = codex[tempo];

	tempo = 0;
	for (i = 0; i < length; i++)
		tempo += argv[1][i];
	passcode[1] = codex[(tempo ^ 79) & 63];

	tempo = 1;
	for (i = 0; i < length; i++)
		tempo *= argv[1][i];
	passcode[2] = codex[(tempo ^ 85) & 63];

	tempo = 0;
	for (i = 0; i < length; i++)
	{
		if (argv[1][i] > tempo)
			tempo = argv[1][i];
	}
	srand(tempo ^ 14);
	passcode[3] = codex[rand() & 63];

	tempo = 0;
	for (i = 0; i < length; i++)
		tempo += (argv[1][i] * argv[1][i]);
	passcode[4] = codex[(tempo ^ 239) & 63];

	for (i = 0; i < argv[1][0]; i++)
		tempo = rand();
	passcode[5] = codex[(tempo ^ 229) & 63];

	passcode[6] = '\0';
	printf("%s", passcode);
	return (0);
}
