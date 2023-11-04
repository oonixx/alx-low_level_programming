#include "hash_tables.h"

/**
 * hash_djb2 - The hash function implementing a djb2 algorithm.
 * @str: String to hash.
 *
 * Return: Calculated hash.
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int cio;

	hash = 5381;
	while ((cio = *str++))
		hash = ((hash << 5) + hash) + cio; 

	return (hash);
}
