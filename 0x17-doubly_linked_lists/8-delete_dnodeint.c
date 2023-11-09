#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index index of a
 *					dlistint_t linked list.
 * @head: head node
 * @index: index of node starting from 0
 * Return: 1 if succuss, -1 if failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	size_t counter;
	dlistint_t *tempo;

	if (head == NULL || *head == NULL)
		return (-1);
	tempo = *head;
	if (index == 0)
	{
		*head = tempo->next;
		if (tempo->next != NULL)
		{
			(tempo->next)->prev = NULL;
		}
		free(tempo);
		return (1);
	}
	for (counter = 0; counter < index; counter++)
	{
		if (tempo->next == NULL)
			return (-1);
		tempo = tempo->next;
	}
	(tempo->prev)->next = tempo->next;
	if (tempo->next != NULL)
		(tempo->next)->prev = tempo->prev;
	free(tempo);
	return (1);
}
