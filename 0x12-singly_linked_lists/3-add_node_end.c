#include "lists.h"

/**
 * _strlen - finds the length of a string
 * @str: string to find the length of
 *
 * Return: length of string
 */
unsigned int _strlen(char *str)
{
	unsigned int i;

	for (i = 0; str[i]; i++)
		;
	return (i);
}


/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @head: head of the list
 * @str: string be duplicated
 * Return: address of the new element,
 *			or NULL if it failed.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newly_added_end, *start;

	if (str == NULL)
		return (NULL);

	newly_added_end = malloc(sizeof(list_t));

	if (newly_added_end == NULL)
		return (NULL);

	newly_added_end->str = strdup(str);

	if (newly_added_end->str == NULL)
	{
		free(newly_added_end);
		return (NULL);
	}

	newly_added_end->len = _strlen(newly_added_end->str);
	newly_added_end->next = NULL;

	if (*head == NULL)
	{
		*head = newly_added_end;
		return (newly_added_end);
	}

	start = *head;

	while (start->next)
		start = start->next;
	start->next = newly_added_end;

	return (newly_added_end);
}
