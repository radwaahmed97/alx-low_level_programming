#include "lists.h"

/**
 * print_listint_safe -  prints a listint_t linked list.
 * @head: pointer to head node
 * Return:  number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t number_of_nodes = 0;

	while (head && head > head->next)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		++number_of_nodes;
	}
	if (head)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		printf("-> [%p] %d\n", (void *)head->next, head->next->n);
		++number_of_nodes;
	}
	return (number_of_nodes);
}

