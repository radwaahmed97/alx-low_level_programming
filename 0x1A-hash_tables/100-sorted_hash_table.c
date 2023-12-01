#include "hash_tables.h"

/**
 * shash_table_create - Creates a sorted hash table.
 * @size: The size of new sorted hash table.
 *
 * Return: If an error occurs - NULL.
 *         Otherwise - a pointer to the new sorted hash table.
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *hashtable;
	unsigned long int index;

	hashtable = malloc(sizeof(shash_table_t));
	if (hashtable == NULL)
		return (NULL);

	hashtable->size = size;
	hashtable->array = malloc(sizeof(shash_node_t *) * size);
	if (hashtable->array == NULL)
		return (NULL);
	for (index = 0; index < size; index++)
		hashtable->array[index] = NULL;
	hashtable->shead = NULL;
	hashtable->stail = NULL;

	return (hashtable);
}

/**
 * shash_table_set - Adds an element to a sorted hash table.
 * @ht: A pointer to the sorted hash table.
 * @key: The key to add - cannot be an empty string.
 * @value: The value associated with key.
 *
 * Return: Upon failure - 0.
 *         Otherwise - 1.
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *newnode, *tempo;
	char *value_copy;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	value_copy = strdup(value);
	if (value_copy == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	tempo = ht->shead;
	while (tempo)
	{
		if (strcmp(tempo->key, key) == 0)
		{
			free(tempo->value);
			tempo->value = value_copy;
			return (1);
		}
		tempo = tempo->snext;
	}

	newnode = malloc(sizeof(shash_node_t));
	if (newnode == NULL)
	{
		free(value_copy);
		return (0);
	}
	newnode->key = strdup(key);
	if (newnode->key == NULL)
	{
		free(value_copy);
		free(newnode);
		return (0);
	}
	newnode->value = value_copy;
	newnode->next = ht->array[index];
	ht->array[index] = newnode;

	if (ht->shead == NULL)
	{
		newnode->sprev = NULL;
		newnode->snext = NULL;
		ht->shead = newnode;
		ht->stail = newnode;
	}
	else if (strcmp(ht->shead->key, key) > 0)
	{
		newnode->sprev = NULL;
		newnode->snext = ht->shead;
		ht->shead->sprev = newnode;
		ht->shead = newnode;
	}
	else
	{
		tempo = ht->shead;
		while (tempo->snext != NULL &&
				strcmp(tempo->snext->key, key) < 0)
			tempo = tempo->snext;
		newnode->sprev = tempo;
		newnode->snext = tempo->snext;
		if (tempo->snext == NULL)
			ht->stail = newnode;
		else
			tempo->snext->sprev = newnode;
		tempo->snext = newnode;
	}

	return (1);
}

/**
 * shash_table_get - Retrieve the value associated with
 *                   a key in a sorted hash table.
 * @ht: A pointer to the sorted hash table.
 * @key: The key to get the value of.
 *
 * Return: If the key cannot be matched - NULL.
 *         Otherwise - the value associated with key in ht.
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *target;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	if (index >= ht->size)
		return (NULL);

	target = ht->shead;
	while (target != NULL && strcmp(target->key, key) != 0)
		target = target->snext;

	return ((target == NULL) ? NULL : target->value);
}

/**
 * shash_table_print - Prints a sorted hash table in order.
 * @ht: A pointer to the sorted hash table.
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *node;

	if (ht == NULL)
		return;

	node = ht->shead;
	printf("{");
	while (node != NULL)
	{
		printf("'%s': '%s'", node->key, node->value);
		node = node->snext;
		if (node != NULL)
			printf(", ");
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - Prints a sorted hash table in reverse order.
 * @ht: A pointer to the sorted hash table to print.
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *node;

	if (ht == NULL)
		return;

	node = ht->stail;
	printf("{");
	while (node != NULL)
	{
		printf("'%s': '%s'", node->key, node->value);
		node = node->sprev;
		if (node != NULL)
			printf(", ");
	}
	printf("}\n");
}

/**
 * shash_table_delete - Deletes a sorted hash table.
 * @ht: A pointer to the sorted hash table.
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_table_t *pointer = ht;
	shash_node_t *node, *tempo;

	if (ht == NULL)
		return;

	node = ht->shead;
	while (node)
	{
		tempo = node->snext;
		free(node->key);
		free(node->value);
		free(node);
		node = tempo;
	}

	free(pointer->array);
	free(pointer);
}
