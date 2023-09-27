#include "lists.h"

/**
 * get_nodeint_at_index - returns thenorth node of a list
 * @head: head of the linked list
 * @index: index of the nodee
 * Return: result
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;

	while (head)
	{
		if (count == index)
			return (head);

		head = head->next;
		count++;
	}
	return (NULL);
}
