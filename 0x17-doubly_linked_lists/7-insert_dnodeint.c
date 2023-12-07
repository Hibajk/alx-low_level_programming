#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: pointer to the head of the doubly linked list
 * @n: integer
 * @idx: position where to insert the node
 * Return: 0 if function fails, otherwise the adress of new node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmp = *h, *new;

	if (idx == 0)
		return (add_dnodeint(h, n));

	for (; idx != 1; idx--)
	{
		tmp = tmp->next;
		if (tmp == NULL)
			return (NULL);
	}

	if (tmp->next == NULL)
		return (add_dnodeint_end(h, n));

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = tmp;
	new->next = tmp->next;
	new->next->prev = new;
	tmp->next = new;

	return (new);
}
