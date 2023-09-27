#include "lists.h"

/**
 * add_nodeint - adds a new mode at the beginning of a listint_t
 * @head: head
 * @n: value
 * Return: adress of the new element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *nd;

	nd = malloc(sizeof(listint_t));
	if (nd == NULL)
		return (NULL);
	nd->n = n;
	nd->next = *head;
	*head = nd;
	return (nd);
}
