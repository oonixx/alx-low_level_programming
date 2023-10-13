#include "lists.h"
/**
 * get_dnodeint_at_index - Get node at index.
 * @head: The pointer to dlistint_t.
 * @index: The unsigned number.
 * Return: returns nth node of a dlistint_t linked list.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	while (head)
	{
		if (index == 0)
			return (head);
		head = head->next;
		index--;
	}
	return (NULL);
}
