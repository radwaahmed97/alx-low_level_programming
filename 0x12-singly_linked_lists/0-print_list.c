#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list.
 * @h: list to be printed it's elements
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	int number_of_nodes = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);

		number_of_nodes++;

		h = h->next;
	}

	return (number_of_nodes);
}

