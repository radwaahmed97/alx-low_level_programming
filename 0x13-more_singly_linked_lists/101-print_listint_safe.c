#include "lists.h"

/**
 * _realloc - reallocates memory for an array of pointer
 * @list: old list to append
 * @size: size of new list
 * @new: new node added
 * Return: pointer to new list
 */

const listint_t **_realloc(const listint_t **list,
		size_t size, const listint_t *new)
{
	size_t index;
	const listint_t **newlist;

	newlist = malloc(size * sizeof(listint_t *));
	if (newlist == NULL)
	{
		free(list);
		exit(98);
	}
	for (index = 0; index < size - 1; index++)
		newlist[index] = list[index];
	newlist[index] = new;
	free(list);
	return (newlist);
}

/**
 * print_listint_safe - prints a linked list, safely
 * @head: list to be printed safely
 * Return: number of nodes
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t index, number = 0;
	const listint_t **list = NULL;

	while (head != NULL)
	{
		for (index = 0; index < number; index++)
		{
			if (head == list[index])
			{
				printf("-> [%p] %d\n",
						(void *)head, head->n);
				free(list);
				return (number);
			}
		}
		number++;
		list = _realloc(list, number, head);
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
	}
	free(list);
	return (number);
}
