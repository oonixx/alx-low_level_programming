#include "lists.h"
/**
 * free_dlistint - free all elements of the dlistint_t list.
 * @head: The pointer to dlistint_t.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;

	current = head;
	while (head)
	{
		current = head;
		head = head->next;
		if (current)
			free(current);
	}
}
