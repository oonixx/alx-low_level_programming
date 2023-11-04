#include "hash_tables.h"

/**
 * hash_table_print - Prints the hash table.
 * @ht: Pointer to hash table to print.
 *
 * Description: Key or value pairs are printed in the order
 *              they appear in the array of hash table.
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	unsigned long int inix;
	unsigned char comma_flag = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (inix = 0; inix < ht->size; inix++)
	{
		if (ht->array[inix] != NULL)
		{
			if (comma_flag == 1)
				printf(", ");

			node = ht->array[inix];
			while (node != NULL)
			{
				printf("'%s': '%s'", node->key, node->value);
				node = node->next;
				if (node != NULL)
					printf(", ");
			}
			comma_flag = 1;
		}
	}
	printf("}\n");
}
