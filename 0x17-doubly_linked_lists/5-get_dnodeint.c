#include "lists.h"
/**
 * get_dnodeint_at_indx - Get node at indx.
 * @head: The pointer to dlistint_t
 * @indx: The unsigned number
 * Return: returns nth node of a dlistint_t linked list.
 */
dlistint_t *get_dnodeint_at_indx(dlistint_t *head, unsigned int indx)
{
	while (head)
	{
		if (indx == 0)
			return (head);
		head = head->next;
		indx--;
	}
	return (NULL);
}
