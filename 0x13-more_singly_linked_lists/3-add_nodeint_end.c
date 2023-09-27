#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end
 * @head: pointer
 * @n: int
 * Return: adress of new elemtnt
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *lnd, *ptemp;

	lnd = malloc(sizeof(listint_t));
	if (lnd == NULL)
		return (NULL);

	lnd->n = n;
	lnd->next = NULL;
	if (*head == NULL)
		*head = lnd;

	else
	{
		ptemp = *head;
		while (ptemp->next != NULL)
			ptemp = ptemp->next;

		ptemp->next = lnd;
	}
	return (lnd);
}
