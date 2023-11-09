#include "lists.h"

/**
 * get_dnodeint_at_index - returns nth node
 * @head: head node
 * @index: index of node starting from 0
 * Return: NULL if not exist, target node otherwise
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head,
	unsigned int index)
{
	unsigned int counter;

	if (head == NULL)
		return (NULL);
	if (index == 0)
		return (head);
	for (counter = 0; counter < index; counter++)
	{
		if (head->next == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
