#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list.
 * @h: name of the list
 * Return: no. of elements
 */

size_t list_len(const list_t *h)
{
	const list_t *start;
	unsigned int number_of_elements;

	start = h;

	while (start)
	{
		number_of_elements++;
		start = start->next;
	}

	return (number_of_elements);
}

