#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table.
 * @ht: hashtable
 * Return: If ht is NULL, don’t print anything
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *n;
	unsigned long int index;
	unsigned char comma = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (index = 0; index < ht->size; index++)
	{
		if (ht->array[index] != NULL)
		{
			if (comma == 1)
				printf(", ");

			n = ht->array[index];
			while (n != NULL)
			{
				printf("'%s': '%s'", n->key, n->value);
				n = n->next;
				if (n != NULL)
					printf(", ");
			}
			comma = 1;
		}
	}
	printf("}\n");
}
