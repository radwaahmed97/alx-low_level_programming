#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of your program.
 * @ac: arguments counter
 * @av: arguments vector
 * Return: NULL if ac == 0 or av == NULL or failure,
 *		a pointer to a new string otherwise.
 */

char *argstostr(int ac, char **av)
{
	char *string;
	int i, j, k, length;

	if (!ac || !av)
		return (NULL);

	for (i = 0, length = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			length++;
		length++;
	}

	string = malloc(sizeof(char) * (length + 1));

	if (string == NULL)
		return (NULL);

	for (i = 0, k = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++, k++)
		{
			string[k] = av[i][j];
		}
		string[k] = '\n';
		k++;
	}
	string[k] = '\0';

	return (string);
}
