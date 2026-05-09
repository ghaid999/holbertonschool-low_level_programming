#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: hash table
 * @key: key
 * @value: value associated with the key
 *
 * Return: 1 if succeeded, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key,
		const char *value)
{
	hash_node_t *new;
	hash_node_t *current;
	unsigned long int index;
	char *dup_value;

	if (ht == NULL || key == NULL || *key == '\0')
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	current = ht->array[index];

	while (current != NULL)
	{
		if (strcmp(current->key, key) == 0)
		{
			dup_value = strdup(value);
			if (dup_value == NULL)
				return (0);

			free(current->value);
			current->value = dup_value;

			return (1);
		}

		current = current->next;
	}

	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (0);

	new->key = strdup(key);
	new->value = strdup(value);

	if (new->key == NULL || new->value == NULL)
	{
		free(new->key);
		free(new->value);
		free(new);

		return (0);
	}

	new->next = ht->array[index];
	ht->array[index] = new;

	return (1);
}
