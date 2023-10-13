#include "lists.h"
/**
 * print_dlistint - prints all the elements of a dlistint_t list.
 * @h: The pointer to dlistint_t head.
 * Return: Number of nodes.
 */
size_t print_dlistint(const dlistint_t *h)
{
	int index = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		index++;
	}
	return (index);
}
