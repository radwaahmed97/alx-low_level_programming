#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index
 *				index of a listint_t linked list.
 * @head: double pointer
 * @index: index of the node should be deleted
 * Return: 1 if succeeded, -1 if failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *present, *next;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		next = (*head)->next;
		free(*head);
		*head = next;
		return (1);
	}
	present = *head;
	for (i = 0; i < index - 1; i++)
	{
		if (present->next == NULL)
			return (-1);
		present = present->next;
	}
	next = present->next;
	present->next = next->next;
	free(next);
	return (-1);
}
