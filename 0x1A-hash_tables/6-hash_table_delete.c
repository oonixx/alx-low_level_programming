#include "hash_tables.h"

/**
 * hash_table_delete - Deletes the hash table.
 * @ht: Pointer to a hash table.
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *head = ht;
	hash_node_t *node, *tmp;
	unsigned long int inix;

	for (inix = 0; inix < ht->size; inix++)
	{
		if (ht->array[inix] != NULL)
		{
			node = ht->array[inix];
			while (node != NULL)
			{
				tmp = node->next;
				free(node->key);
				free(node->value);
				free(node);
				node = tmp;
			}
		}
	}
	free(head->array);
	free(head);
}
