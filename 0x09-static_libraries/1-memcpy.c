#include "main.h"

/**
 * _memcpy - Entry point
 *
 * Description: A function that copies a memory area
 * @dest: Destination memory area
 * @src: Origin memory area
 * @n: An integer
 * Return: A pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int j;

	for (j = 0; j < n; j++)
		dest[j] = src[j];

	return (dest);
}
