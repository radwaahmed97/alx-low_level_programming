#include "search_algos.h"

/**
 * linear_skip - searches for a value in a sorted skip list of integers.
 * @list: pointer to head node in list of integers
 * @value: required value
 * Return: pointer on the first node where value is located, NULL otherwise
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *ready;

	if (list == NULL)
		return (NULL);

	ready = list;

	do {
		list = ready;
		ready = ready->express;
		printf("Value checked at index ");
		printf("[%d] = [%d]\n", (int)ready->index, ready->n);
	} while (ready->express && ready->n < value);

	if (ready->express == NULL)
	{
		list = ready;
		while (ready->next)
			ready = ready->next;
	}

	printf("Value found between indexes ");
	printf("[%d] and [%d]\n", (int)list->index, (int)ready->index);

	while (list != ready->next)
	{
		printf("Value checked at index [%d] = [%d]\n", (int)list->index, list->n);
		if (list->n == value)
			return (list);
		list = list->next;
	}

	return (NULL);
}
