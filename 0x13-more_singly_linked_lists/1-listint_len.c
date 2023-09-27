#include "lists.h"

/**
 * listint_len - returns the num of elements in a linked listint_t
 * @h: pointer
 * Return: num of elements
 */

size_t listint_len(const listint_t *h)
{
	int count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}
	return (count);
}
