#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table.
 * @ht: hash table you want to add or update the key/value to
 * @key: key and it cannot be empty string
 * @value: value associated with the key. value must be duplicated.
 *		value can be an empty string.
 * Return: 1 if succeeded, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *newadded;
	char *value_copy;
	unsigned long int index, i;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	value_copy = strdup(value);
	if (value_copy == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	for (i = index; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = value_copy;
			return (1);
		}
	}

	newadded = malloc(sizeof(hash_node_t));
	if (newadded == NULL)
	{
		free(value_copy);
		return (0);
	}
	newadded->key = strdup(key);
	if (newadded->key == NULL)
	{
		free(newadded);
		return (0);
	}
	newadded->value = value_copy;
	newadded->next = ht->array[index];
	ht->array[index] = newadded;

	return (1);
}
