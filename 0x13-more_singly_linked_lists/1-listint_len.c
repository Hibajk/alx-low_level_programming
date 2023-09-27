#include "list.h"

/**
 * listint_len - prints a linked lists
 * @h: pointer to first node
 *
 * Return: sizeof list
 */
size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
