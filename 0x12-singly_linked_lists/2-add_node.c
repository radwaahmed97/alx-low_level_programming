#include "lists.h"

/**
 * _strlen - returns length of a string
 * @str: string to get length
 * Return: length of string
 */

int _strlen(const char *str)
{
	int i;

	for (i = 0; str[i]; i++)
		;
	return (i);
}


/**
 * add_node - adds a new node at the beginning of a list_t list.
 * @head: head of the list
 * @str: string needs be duplicated
 * Return: address of the new element, NULL otherwise
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newly_added;

	newly_added = malloc(sizeof(list_t));

	if (newly_added == NULL)
		return (NULL);

	newly_added->str = strdup(str);

	newly_added->len = _strlen(str);
	newly_added->next = *head;

	*head = newly_added;

	return (newly_added);
}
