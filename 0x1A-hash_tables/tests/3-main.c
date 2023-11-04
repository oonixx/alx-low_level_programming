#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "../h_tables.h"

/**
 * main - check code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
	hash_table_t *ht;

	ht = hash_table_create(1024);
	hash_table_set(ht, "betty", "holberton");
	return (EXIT_SUCCESS);
}
