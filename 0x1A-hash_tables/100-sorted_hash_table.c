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
 * make_shash_node - makes a node for the sorted hash table
 * @key: key for the data
 * @value: data to be stored
 *
 * Return: pointer to the new node, or NULL on failure
 */
shash_node_t *make_shash_node(const char *key, const char *value)
{
	shash_node_t *shnode;

	shnode = malloc(sizeof(shash_node_t));
	if (shnode == NULL)
		return (NULL);
	shnode->key = strdup(key);
	if (shnode->key == NULL)
	{
		free(shnode);
		return (NULL);
	}
	shnode->value = strdup(value);
	if (shnode->value == NULL)
	{
		free(shnode->key);
		free(shnode);
		return (NULL);
	}
	shnode->next = shnode->snext = shnode->sprev = NULL;
	return (shnode);
}

/**
 * to_sortedlist - add a node to the sorted (by key's ASCII) linked list
 * @table: the sorted hash table
 * @node: the node to add
 *
 * Return: void
 */
void to_sortedlist(shash_table_t *table, shash_node_t *node)
{
	shash_node_t *tempo;

	if (table->shead == NULL && table->stail == NULL)
	{
		table->shead = table->stail = node;
		return;
	}
	tempo = table->shead;
	while (tempo != NULL)
	{
		if (strcmp(node->key, tempo->key) < 0)
		{
			node->snext = tempo;
			node->sprev = tempo->sprev;
			tempo->sprev = node;
			if (node->sprev != NULL)
				node->sprev->snext = node;
			else
				table->shead = node;
			return;
		}
		tempo = tempo->snext;
	}
	node->sprev = table->stail;
	table->stail->snext = node;
	table->stail = node;
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
	unsigned long int i;
	char *newvalue;
	shash_node_t *shnode, *tempo;

	if (ht == NULL || ht->array == NULL || ht->size == 0 ||
	    key == NULL || strlen(key) == 0 || value == NULL)
		return (0);
	i = key_index((const unsigned char *)key, ht->size);
	tempo = ht->array[i];
	while (tempo != NULL)
	{
		if (strcmp(tempo->key, key) == 0)
		{
			newvalue = strdup(value);
			if (newvalue == NULL)
				return (0);
			free(tempo->value);
			tempo->value = newvalue;
			return (1);
		}
		tempo = tempo->next;
	}
	shnode = make_shash_node(key, value);
	if (shnode == NULL)
		return (0);
	shnode->next = ht->array[i];
	ht->array[i] = shnode;
	to_sortedlist(ht, shnode);
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
