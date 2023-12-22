#include "hash_tables.h"

/**
 * hash_table_get - function that retrieves a value associated with a key
 * @ht: hash table
 * @key: key
 * Return: the value or null if key not found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	int idx;
	hash_node_t *tmp;

	if (!key || !ht || ht->array || !ht->size || !strlen(key))
		return (NULL);

	idx = key_index((unsigned char *)key, ht->size);

	tmp = ht->array[idx];
	if (tmp == NULL)
		return (NULL);

	for (; tmp != NULL; tmp = tmp->next)
	{
		if (strcmp(tmp->key, key) == 0)
			return (tmp->value);
	}

	return (NULL);
}
