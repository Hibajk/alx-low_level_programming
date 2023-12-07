#include "lists.h"

/**
 * free_dlistint - frees the list
 * @head: pointer to the head of the list
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *node;

	while (head)
	{
		node = head;
		head = head->next;
		free(node);
	}
}
