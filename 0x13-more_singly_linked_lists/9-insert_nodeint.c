#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: double pointer
 * @idx: index of list where new node should be added
 * @n: int added
 * Return: NULL if impossible to add new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp, *newnode;
	unsigned int i;

	if (head == NULL)
		return (NULL);
	if (idx != 0)
	{
		temp = *head;
		for (i = 0; i < idx - 1 && temp != NULL; i++)
		{
			temp = temp->next;
		}
		if (temp == NULL)
			return (NULL);
	}
	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	if (idx == 0)
	{
		newnode->next = *head;
		*head = newnode;
		return (newnode);
	}
	newnode->next = temp->next;
	temp->next = newnode;
	return (newnode);
}
