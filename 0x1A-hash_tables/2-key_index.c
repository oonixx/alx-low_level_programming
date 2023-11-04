#include "hash_tables.h"

/**
 * key_index - Get an index at which a key or value pair should
 *             be stored in the array of a hash table.
 * @key: Key to get the index of.
 * @size: Size of the array of the hash table.
 *
 * Return: Index of the key.
 *
 * Description: Uses djb2 algorithm.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
