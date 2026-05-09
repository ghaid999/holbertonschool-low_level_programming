#include <stdlib.h>
#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: hash table
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *current;
	hash_node_t *temp;
	unsigned long int i;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		current = ht->array[i];

		while (current != NULL)
		{
			temp = current->next;

			free(current->key);
			free(current->value);
			free(current);

			current = temp;
		}
	}

	free(ht->array);
	free(ht);
}
