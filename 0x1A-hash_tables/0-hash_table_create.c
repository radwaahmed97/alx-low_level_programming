#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table.
 * @size: size of array
 * Return: pointer to the newly created hash table, NULL if wrong
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hashtable;
	unsigned long int index;

	hashtable = malloc(sizeof(hash_table_t));
	if (hashtable == NULL)
		return (NULL);

	hashtable->size = size;
	hashtable->array = malloc(size * sizeof(hash_node_t *));
	if (hashtable->array == NULL)
	{
		free(hashtable);
		return (NULL);
	}
	for (index = 0; index < size; index++)
		hashtable->array[index] = NULL;
	return (hashtable);
}
