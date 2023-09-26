#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list
 * @head: double pointer to head of list
 * Return: a pointer to the first node of reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *previous = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = previous;
		previous = *head;
		*head = next;
	}

	*head = previous;

	return (*head);
}
