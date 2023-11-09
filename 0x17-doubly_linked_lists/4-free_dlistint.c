#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list
 * @head: head node
 * Return: nothing
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *pointer;

	while (head != NULL)
	{
		pointer = head->next;
		free(head);
		head = pointer;
	}
}
