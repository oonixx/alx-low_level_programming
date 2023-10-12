#include "lists.h"

/**
 * print_dlistint - prints all the elements of 
 * dlistint_t list
 *
 * @head: Head of the list
 * Return: Number of nodes
 */
size_t print_dlistint(const dlistint_t *head)
{
	int count;

	count = 0;

	if (head == NULL)
		return (count);

	while (head->prev != NULL)
		head = head->prev;

	while (head != NULL)
	{
		printf("%d\n", head->n);
		count++;
		head = head->next;
	}

	return (count);
}

