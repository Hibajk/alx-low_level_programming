#include "lists.h"

/**
 * sum_dlistint - sum of all data
 * @head: pointer to head node
 * Return: sum and 0 id the list is empty
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
