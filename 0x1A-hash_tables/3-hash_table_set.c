#include "hash_tables.h"

/**
 * hash_table_set - Entry point
 *
 * Description: Adds an element to the hash table
 * @ht: The hash table
 * @key: The key
 * @value: The value associated in key
 * Return: 1 if succeeded 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned int long index;
	hash_node_t *tmp, *new_node;

	if (key == NULL || ht == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[index];

	/* Create new node */
	while (tmp != NULL)
	{
		if (strcmp(key, tmp->key) == 0)
		{
			free(tmp->value);
			tmp->value = strdup(value);
			return (1);
		}
		tmp = tmp->next;
	}
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);
	new_node->key = strdup(key);
	new_node->value = strdup(value);

	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
}
