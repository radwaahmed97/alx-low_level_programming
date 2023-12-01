#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table.
 * @ht: hashtable
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *pointer = ht;
	hash_node_t *target, *tempo;
	unsigned long int i;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			target = ht->array[i];
			while (target != NULL)
			{
				tempo = target->next;
				free(target->key);
				free(target->value);
				free(target);
				target = tempo;
			}
		}
	}
	free(pointer->array);
	free(pointer);
}
