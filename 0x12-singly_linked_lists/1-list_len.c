#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list.
 * @h: name of the list
 * Return: no. of elements
 */

size_t list_len(const list_t *h)
{
	int number_of_elements = 0;

	while (h)
	{
		number_of_elements++;
		h = h->next;
	}

	return (number_of_elements);
}
