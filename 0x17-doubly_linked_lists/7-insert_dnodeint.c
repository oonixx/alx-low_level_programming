#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at
 * the given position
 *
 * @h: The head of the list
 * @idx: The index of the new node
 * @n: The value of the new node
 * Return: the address of the new node , NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
    dlistint_t *new;
    dlistint_t *head;
    unsigned int ii; // Change 'i' to 'ii'

    new = NULL;
    if (idx == 0)
        new = add_dnodeint(h, n);
    else
    {
        head = *h;
        ii = 1; // Change 'i' to 'ii'
        if (head != NULL)
            while (head->prev != NULL)
                head = head->prev;
        while (head != NULL)
        {
            if (ii == idx) // Change 'i' to 'ii'
            {
                if (head->next == NULL)
                    new = add_dnodeint_end(h, n);
                else
                {
                    new = malloc(sizeof(dlistint_t));
                    if (new != NULL)
                    {
                        new->n = n;
                        new->next = head->next;
                        new->prev = head;
                        head->next->prev = new;
                        head->next = new;
                    }
                }
                break;
            }
            head = head->next;
            ii++; // Change 'i' to 'ii'
        }
    }

    return (new);
}

