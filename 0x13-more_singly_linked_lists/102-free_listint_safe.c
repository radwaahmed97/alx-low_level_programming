#include "lists.h"

/**
 * free_listint_safe - frees a listint_t list.
 * @h: double pointer to head node
 * Return: size of the list that was free’d
 */

size_t free_listint_safe(listint_t **h)
{
	size_t counter = 0;
	listint_t *ptr;

	while (*h && *h > (*h)->next)
	{
		ptr = (*h)->next;
		free(*h);
		*h = ptr;
		++counter;
	}
	if (*h)
	{
		free(*h);
		++counter;
	}
	*h = NULL;
	return (counter);
}
