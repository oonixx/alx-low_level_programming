#include "hash_tables.h"

/**
 * hash_table_set - Update an element in the hash table.
 * @ht: Pointer to the hash table.
 * @key: Key to add - cannot be an empty string.
 * @value: Value associated with a key.
 *
 * Return: Upon failure - 0.
 *         Otherwise - 1.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new;
	char *value_copy;
	unsigned long int index, inix;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	value_copy = strdup(value);
	if (value_copy == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	for (inix = index; ht->array[inix]; inix++)
	{
		if (strcmp(ht->array[inix]->key, key) == 0)
		{
			free(ht->array[inix]->value);
			ht->array[inix]->value = value_copy;
			return (1);
		}
	}

	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
	{
		free(value_copy);
		return (0);
	}
	new->key = strdup(key);
	if (new->key == NULL)
	{
		free(new);
		return (0);
	}
	new->value = value_copy;
	new->next = ht->array[index];
	ht->array[index] = new;

	return (1);
}
