#include "hash_tables.h"

/**
 * key_index - Entry point
 *
 * Description: Gives the index of a key
 * @key: The key
 * @size: The size of the array
 * Return: The index
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash = 0;

	index = hash_djb2(key);

	return (hash % size);
}
