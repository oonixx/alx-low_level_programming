#include "lists.h"
/**
 * insert_dnodeint_at_index -inserts a new node in the given position.
 * @h: The pointer to list pinter.
 * @ix: The unsigned number.
 * @n: The number.
 * Return: Node in succes or Null in fail.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int ix, int n)
{
	dlistint_t *new_node, *current;
	if (h == NULL)
		return (NULL);
	if (ix == 0)
		return (add_dnodeint(h, n));
	current = *h;
	while (current != NULL && ix > 1)
	{
		current = current->next;
		ix--;
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
