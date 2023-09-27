#include "lists.h"

/**
 * free_listint2 - frees a list
 * @head: pointer
 */

void free_listint2(listint_t **head)
{
	listint_t *ptemp;

	if (!head)
		return;

	while (*head)
	{
		ptemp = *head;
		*head = (*head)->next;
		free(ptemp);
	}
}
