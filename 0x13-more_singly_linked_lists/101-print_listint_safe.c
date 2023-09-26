#include "lists.h"

/**
 * print_listint_safe -  prints a listint_t linked list.
 * @head: head of the list
 * Return: number of the nodes in list, exit with status 98 if fails
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t number = 0;

	while (head && head > head->next)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		++number;
	}
	if (head)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		printf("-> [%p] %d\n", (void *)head->next,
				head->next->n);
		++number;
	}

	return (number);
}
