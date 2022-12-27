#include "main.h"

/**
 * *_calloc - Entry point
 *
 * Description: Allocates memory for an array, using malloc
 * @nmemb: Number of elements in array
 * @size: Size int bytes of each element
 * Return: Pointer to new memory location
 * If malloc fails, or if size or nmemb is 0, return NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *arr;

	if (size == 0 || nmemb == 0)
		return (NULL);

	arr = malloc(size * nmemb);
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
		arr[i] = 0;
	return (arr);
}
