#include "lists.h"

/**
 * print_listint_safe -  prints a listint_t linked list.
 * @head: pointer to head node
 * Return:  number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *present = head;
	size_t number_of_nodes = 0;

	while (present != NULL)
	{
		printf("[%p] %d\n", (void *)present, present->n);
		number_of_nodes++;

		if (present->next >= present)
		{
			printf("-> [%p] %d\n", (void *)present->next,
					present->next->n);
			break;
		}
		present = present->next;
	}
	return (number_of_nodes);
}

