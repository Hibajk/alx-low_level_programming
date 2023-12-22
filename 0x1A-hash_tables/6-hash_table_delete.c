#include "hash_tables.h"

/**
 * hash_table_delete - function taht deletes a hsah table
 * @ht: Hash table
 * Return: result
 */


void hash_table_delete(hash_table_t *ht)
{

	hash_table_t *head = ht;
	hash_node_t *temp;
	unsigned long int a;

	if (!ht)
		return;

	for (a = 0; a < ht->size; a++)
	{
		if (ht->array[a])
		{
			while (ht->array[a])
			{
				temp = ht->array[a]->next;
				free(ht->array[a]->key);
				free(ht->array[a]->value);
				free(ht->array[a]);
				ht->array[a] = temp;
			}
		}
	}

	free(head->array);
	free(head);
}
