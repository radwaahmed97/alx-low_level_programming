#include "lists.h"

/**
 * print_dlistint - prints elements of double linked list
 * @h: head node
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t no_elements;

	for (no_elements = 0; h != NULL; no_elements++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (no_elements);
}
