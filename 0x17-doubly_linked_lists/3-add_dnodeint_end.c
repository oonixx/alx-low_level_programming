#include "lists.h"
/**
 * add_dnodeint_end - add new node in the end of the dlistint_t list.
 * @head: The pointer to head pointer.
 * @n: The integer value.
 * Return: node address in succes or null in fail.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *current;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;
	/*add new node in the beginning of the list*/
	if (*head == NULL)
		*head = new_node;
	else
	{
		current = *head;
		while (current->next)
			current = current->next;

		new_node->prev = current;
		current->next = new_node;
	}


	return (new_node);
}
