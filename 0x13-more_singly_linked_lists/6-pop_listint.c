#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list,
 *			and returns the head node’s data (n).
 * @head: double pointer
 * Return: 0 if empty, head's node data(n) otherwise.
 */

int pop_listint(listint_t **head)
{
	listint_t *pointer;
	int n;

	if (head == NULL || *head == NULL)
		return (0);

	pointer = *head;
	*head = pointer->next;
	n = pointer->n;
	free(pointer);
	return (n);
}

