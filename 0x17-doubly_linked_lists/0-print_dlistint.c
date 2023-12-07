#include "lists.h"

/**
 * print_dlistint - prints all elemens of a linked list
 * @h: pointer to the head
 * Return: num of nodes in the linked list
 */

size_t print_dlistint(const dlistint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
