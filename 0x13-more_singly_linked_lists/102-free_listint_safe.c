#include "lists.h"

/**
 * free_listint_safe - frees a listint_t list
 * @h: double pointer
 * Return: size of list freed
 */

size_t free_listint_safe(listint_t **h)
{
	size_t length = 0;
	int difference;
	listint_t *ptr;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		difference = *h - (*h)->next;
		if (difference > 0)
		{
			ptr = (*h)->next;
			*h = ptr;
			length++;
		}
		else
		{
			*h = NULL;
			length++;
			break;
		}
	}

	*h = NULL;

	return (length);
}
