#include "hash_tables.h"

/**
 * hash_table_create - Creat a hash_table.
 * @size: Size of array.
 *
 * Return: If its an error occurs - NULL.
 *         Otherwise - pointer to the new hash_table.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;
	unsigned long int index;

	ht = malloc(sizeof(hash_table_t));
	if (ht == NULL)
		return (NULL);

	ht->size = size;
	ht->array = malloc(sizeof(hash_node_t *) * size);
	if (ht->array == NULL)
		return (NULL);
	for (index = 0; index < size; index++)
		ht->array[index] = NULL;

	return (ht);
}
