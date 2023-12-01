#include "hash_tables.h"

/**
 * hash_table_get -  retrieves a value associated with a key.
 * @ht: hash table you want to look into
 * @key:  key you are looking for
 * Return: value associated with the element,
 *		or NULL if key couldn’t be found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *required;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	if (index >= ht->size)
		return (NULL);

	required = ht->array[index];
	while (required && strcmp(required->key, key) != 0)
		required = required->next;

	return ((required == NULL) ? NULL : required->value);
}
