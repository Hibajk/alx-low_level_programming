#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @head: head
 */

void free_listint(listint_t *head)
{
	listint_t *ptr;

	while (head)
	{
		ptr = head->next;
		free(head);
		head = ptr;
	}
}
