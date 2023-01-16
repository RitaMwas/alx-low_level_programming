#include "main.h"

/**
 * _strncat - Entry point
 *
 * Description: Concatenates two strings
 * @dest: Destination string
 * @src: Origin string
 * @n: number of bytes
 * Return: Resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int len1, i;

	for (len1 = 0; dest[len1] != 0; len1++)
	{
	}
	for (i = 0; i < n && src[i] != 0; i++)
	{
		dest[len1] = src[i];
		len1++;
	}
	dest[len1] = 0;

	return (dest);
}
