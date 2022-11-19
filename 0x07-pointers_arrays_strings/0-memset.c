#include "main.h"

/**
 * _memset - Entry point
 *
 * Description: Fills memory with a constant byte
 * @s: String
 * @b: A character
 * @n: An integer
 * Return: A string
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int j;

	for (j = 0; j < n; j++)
		s[j] = b;

	return (s);
}
