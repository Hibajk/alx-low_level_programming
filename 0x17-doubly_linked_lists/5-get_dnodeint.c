#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node
 * @head: pointer to the head of the doubly list
 * @index: index of the node
 * Return: null if node does not exist
 */


dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head)
	{
		if (i == index)
			return (head);
		head = head->next;
		i++;
	}
	return (NULL);
}
