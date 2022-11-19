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
	int j = 0;

	while (s[j] != 0)
	{
		j++;
		if (s[j] == c)
		{
			return (s + j);
		}
	}
	return (0);
}
