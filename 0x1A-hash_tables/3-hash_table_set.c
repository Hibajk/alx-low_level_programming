#include "hash_tables.h"

/**
 * create_node - function that craetes a node
 * @key: key
 * @value: value of the key
 * Return: new hash node
 */

hash_node_t *create_node(const char *key, const char *value)
{
	hash_node_t *new_node;
	char *new_key;
	char *new_value;

	/* allocating memory*/
	new_key = strdup(key);
	if (!new_key)
		return (NULL);


	/* allocating memory*/
	new_value = strdup(value);
	if (!new_value)
		return (NULL);

	/* allocating memory for the new node*/

	new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
	{
		free(new_key);
		free(new_value);
		return (NULL);
	}


	new_node->next = NULL;
	new_node->key = new_key;
	new_node->value = new_value;

	return (new_node);
}


/**
 * hash_table_set - function that adds an element to the hash table
 * @ht: hash table
 * @key: key
 * @value: value of the key
 * Return: 1 if it succeeded, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *tmp;
	char *new_value;
	int idx;

	if (!ht || !key || !value || !strlen(key) || !ht->array || !ht->size)
		return (0);

	idx = key_index((unsigned char *) key, ht->size);
	for (tmp = ht->array[idx]; tmp != NULL; tmp = tmp->next)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			new_value = strdup(value);
			if (!new_value)
				return (0);
			free(tmp->value);
			tmp->value = new_value;
			return (1);
		}
	}

	tmp = create_node(key, value);
	if (!tmp)
		return (0);
	tmp->next = ht->array[idx];
	ht->array[idx] = tmp;
	return (1);
}
