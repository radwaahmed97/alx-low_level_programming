#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list.
 * @head: head of double pointer
 * @n: int added to the list
 * Return: address of the new element,
 *		NULL othereise.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *pointer;

	if (head == NULL)
	{
		return (NULL);
	}

	pointer = malloc(sizeof(listint_t));

	if (pointer == NULL)
	{
		return (NULL);
	}

	pointer->n = n;
	pointer->next = *head;
	*head = pointer;

	return (pointer);
}
