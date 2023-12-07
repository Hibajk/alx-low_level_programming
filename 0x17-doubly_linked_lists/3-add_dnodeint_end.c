#include "lists.h"

/**
 * add_dnodeint_end - adds a node at the end
 * @head: pointer to pointer to the head of list
 * @n: value to be added
 * Return: adress of new elemrnt or null
 */


dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *temp;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
	}
	else
	{
		temp = *head;
		while (temp->next)
			temp = temp->next;
		temp->next = new_node;
		new_node->prev = temp;
	}

	return (new_node);
}
