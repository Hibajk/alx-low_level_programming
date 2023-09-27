#include "lists.h"

/**
 * pop_listint - deletes the head node of a list
 * @head: pointer
 * Return: result
 */

int pop_listint(listint_t **head)
{
	listint_t *t;
	int n;

	if (!(*head))
		return (0);
	n = (*head)->n;
	t = *head;
	*head = (*head)->next;
	free(t);
	return (n);
}
