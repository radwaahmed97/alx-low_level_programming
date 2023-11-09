#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: head node
 * @idx: index of target starting from 0
 * @n: data
 * Return: newnode, NULL if failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h,
		unsigned int idx, int n)
{
	dlistint_t *newnode, *tempo, *pointer;
	size_t index;

	if (h == NULL)
		return (NULL);
	if (idx != 0)
	{
		tempo = *h;
		for (index = 0; index < idx - 1 && tempo != NULL; index++)
			tempo = tempo->next;
		if (tempo == NULL)
			return (NULL);
	}
	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	if (idx == 0)
	{
		pointer = *h;
		*h = newnode;
		newnode->prev = NULL;
	}
	else
	{
		newnode->prev = tempo;
		pointer = tempo->next;
		tempo->next = newnode;
	}
	newnode->next = pointer;
	if (newnode->next != NULL)
		(newnode->next)->prev = newnode;
	return (newnode);
}
