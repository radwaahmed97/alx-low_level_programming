#include "lists.h"

/**
 * sum_dlistint - returns sum of all data(n)
 * @head: head node
 * Return: sum if success, 0 if empty
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
