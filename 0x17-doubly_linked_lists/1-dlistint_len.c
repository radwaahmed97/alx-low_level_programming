#include "lists.h"

/**
 * dlistint_len - returns no. of elements in a linked dlistint_t list
 * @h: head node
 * Return: number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t number;

	for (number = 0; h != NULL; number++)
	{
		h = h->next;
	}
	return (number);
}
