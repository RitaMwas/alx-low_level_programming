#include "main.h"

/**
 * *malloc_checked - Entry point
 *
 * Description: Allocates memory using malloc
 * @b: Size of memory to be allocated
 * Return: A pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *arr;

	arr = malloc(b);
	if (arr == NULL)
		exit(98);

	return (arr);
}
