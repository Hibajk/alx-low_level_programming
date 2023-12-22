#include "hash_tables.h"

/**
 * hash_table_print - fnction that prints a hash table
 * @ht: hash table
 * Return: hash table, and if its null dont print anything
 */

void hash_table_print(const hash_table_t *ht)
{

	unsigned long int a, print_flag = 0;

	if (!ht)
		return;

	printf("{");
	for (a = 0; a < ht->size; a++)
	{
		if (ht->array[a])
		{
			while (ht->array[a])
			{
				if (print_flag == 1)
					printf(", ");
				printf("'%s': '%s'", ht->array[a]->key, ht->array[a]->value);
				print_flag = 1;
				ht->array[a] = ht->array[a]->next;
			}
		}
	}
	printf("}\n");
}
