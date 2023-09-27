#include "lists.h"

/**
 * print_listint - prints all elements of listint_t
 * @h: head of list
 * Return: result
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (count);
}
