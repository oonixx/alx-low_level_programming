#include "lists.h"
/**
 * insert_dnodeint_at_index -inserts new node in the given position.
 * @h: The pointer to list pinter.
 * @indx: The unsigned number.
 * @n: The number.
 * Return: Node in succes or Null in error.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int indx, int n)
{
	dlistint_t *new_node, *current;
	if (h == NULL)
		return (NULL);
	if (indx == 0)
		return (add_dnodeint(h, n));
	current = *h;
	while (current != NULL && indx > 1)
	{
		current = current->next;
		indx--;
	}

	if (current == NULL)
		return (NULL);

	if (current->next == NULL)
		return (add_dnodeint_end(h, n));

	new_node = add_dnodeint(&(current->next), n);
	if (new_node == NULL)
		return (NULL);

	new_node->prev = current;
	return (new_node);
}
