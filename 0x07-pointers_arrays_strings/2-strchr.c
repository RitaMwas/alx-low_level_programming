#include "main.h"

/**
 * _strchr - Entry point
 *
 * Description: Locates a character in a string
 * @s: A string
 * @c: A character
 * Return: A pointer to c or NULL is not found
 */

char *_strchr(char *s, char c)
{
	int j = 0, k;

	while (s[j])
		j++;
	for (k = 0; k < j; k++)
	{
		if (c == s[k])
			s += k;
		return (s);
	}
	return ('\0');
}
