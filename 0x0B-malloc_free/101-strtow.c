#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_word - creates a word and insert it into the array
 * @words: array of strings
 * @str: string
 * @start: start index of word
 * @end: stop index of word
 * @index: index of the array to word be inserted
 */

void create_word(char **words, char *str, int start, int end, int index)
{
	int i, j;

	i = end - start;
	words[index] = (char *)malloc(sizeof(char) * (i + 1));

	for (j = 0; start < end; start++, j++)
	{
		words[index][j] = str[start];
	}
	words[index][j] = '\0';
}


/**
 * util - a util function for fetching words into an array
 * @words: the strings array
 * @str: the string
 */
void util(char **words, char *str)
{
	int i, j, start, flag;

	i = j = flag = 0;
	while (str[i])
	{
		if (flag == 0 && str[i] != ' ')
		{
			start = i;
			flag = 1;
		}

		if (i > 0 && str[i] == ' ' && str[i - 1] != ' ')
		{
			create_word(words, str, start, i, j);
			j++;
			flag = 0;
		}

		i++;
	}

	if (flag == 1)
		create_word(words, str, start, i, j);
}


/**
 * strtow - splits a string into words.
 * @str: string to be splited.
 * Return: NULL if str == NULL or str == "" or failure,
 *		a pointer to an array of strings (words) otherwise.
 */

char **strtow(char *str)
{
	int i, flag, len;
	char **words;

	if (str == NULL || str[0] == '\0' ||
			(str[0] == ' ' && str[1] == '\0'))
		return (NULL);
	i = flag = len = 0;

	while (str[i])
	{
		if (flag == 0 && str[i] != ' ')
			flag = 1;

		if (i > 0 && str[i] == ' ' && str[i - 1] != ' ')
		{
			flag = 0;
			len++;
		}
		i++;
	}

	len += flag == 1 ? 1 : 0;

	if (len == 0)
		return (NULL);

	words = (char **)malloc(sizeof(char *) * (len + 1));

	if (words == NULL)
		return (NULL);

	util(words, str);
	words[len] = NULL;
	return (words);
}

