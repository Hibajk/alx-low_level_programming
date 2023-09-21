#include <stdlib.h>
#include "lists.h"

/**
 * list_len - return the num of elements in a linked list_t
 * @h: pointer
 * Return: result
 */

size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
}
