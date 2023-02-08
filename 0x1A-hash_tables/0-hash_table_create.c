#include "hash_tables.h"

/**
 * hash_table_create - Entry point
 *
 * Description: Creates a hash table
 * @size: The size of the array
 * Return: The created hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *new_table = malloc(sizeof(hash_table_t));

	/* Check if new_t was created succesfully */
	if (new_table == NULL || size <= 0)
		return (NULL);

	/* Initialize array to null */
	new_table->array = malloc(sizeof(void *) * size);
	if (new_table->array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		new_table->array[i] = NULL;

	new_table->size = size;

	return (new_table);
}
