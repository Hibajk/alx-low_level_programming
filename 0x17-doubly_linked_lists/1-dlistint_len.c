#include "lists.h"

/**
 * dlistint_len - returns the num of elements
 * @h: pointer to head
 * Return: num of elements in the linked list
 */


size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
	h = h->next;
	count++;
	}
	return (count);
}
