#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: first node in list
 * @index: index of the node, starting at 0
 * Return: 0 if not exists, nth node otherwise
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int idx;

	if (head == NULL)
		return (NULL);

	for (idx = 0; idx < index; idx++)
	{
		head = head->next;
		if (head == NULL)
			return (NULL);
	}
	return (head);
}
