#include "lists.h"
/**
 * sum_dlistint - sum of all data (n) of a dlistint_t linked list.
 * @head: The pointer to dlistint_t head.
 * Return: The sum.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
