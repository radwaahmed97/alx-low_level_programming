#include "lists.h"

/**
 * _realloc - reallocates memory for an array of pointers
 *			to nodes in a linked list.
 * @list: old lis to append
 * @size: size of new list (one more old list)
 * @new: new node added to the list
 * Return: pointer to new list
 */

const listint_t **_realloc(const listint_t **list, size_t size,
		const listint_t *new)
{
	size_t index;
	const listint_t **newls;

	newls = malloc(size * sizeof(listint_t *));
	if (newls == NULL)
	{
		free(list);
		exit(98);
	}
	for (index = 0; index < size - 1; index++)
		newls[index] = list[index];
	newls[index] = new;
	free(list);
	return (newls);
}

/**
 * print_listint_safe -  prints a listint_t linked list.
 * @head: head of the list
 * Return: number of the nodes in list, exit with status 98 if fails
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
				printf("-> [%p] %d\n", (void *)head,
						head->n);
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

