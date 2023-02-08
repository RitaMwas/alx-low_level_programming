#include "hash_tables.h"

/**
 * hash_table_get - Entry point
 *
 * Description: Retrieves a value associated by a key
 * @ht: The hash table to retrieve values from
 * @key: The key to look for
 * Return: The value associated with the key NULL if none
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *tmp;
	unsigned long int index;

	if (ht == NULL || key == NULL)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[index];

	while (tmp != NULL)
	{
		if (strcmp(tmp->key, key) == 0)
			return (tmp->value);
		tmp = tmp->next;
	}
	return (NULL);
}
