#include "main.h"

/**
 * *create_array - Entry point
 *
 * Description: creates an array of chars
 * @size: size of array
 * @c: specific char
 * Return: Returns pointer to array, NULL if fail, NULL if size is 0.
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
		return (NULL);

	arr = (char *)malloc(sizeof(char) * size);
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		*(arr + i) = c;
	*(arr + i) = '\0';

	return (arr);
}
