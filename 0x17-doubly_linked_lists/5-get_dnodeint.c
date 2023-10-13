#include "lists.h"
/**
 * get_dnodeint_at_idx - Get node at idx.
 * @head: The pointer to dlistint_t
 * @idx: The unsigned number
 * Return: returns nth node of a dlistint_t linked list.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int idx)
{
	while (head)
	{
		if (idx == 0)
			return (head);
		head = head->next;
		idx--;
	}
	return (NULL);
}
