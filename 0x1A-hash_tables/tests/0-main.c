#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "../h_tables.h"

/**
 * main - Check code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
	hash_table_t *ht;

	ht = hash_table_create(1024);
	printf("%p\n", (void *)ht);
	return (EXIT_SUCCESS);
}
