#include "main.h"

/**
 * _strpbrk - Entry point
 *
 * Description: Searches a string for any set of bytes
 * @s: string to be searched
 * @accept: bytes to be searched for
 * Return: pointer to s and NULL if none
 */

char *_strpbrk(char *s, char *accept)
{
	int a, b;

	for (a = 0; s[a] != 0; a++)
	{
		for (b = 0; accept[b] != 0; b++)
		{
			if (accept[b] == s[a])
			{
				return (s + a);
			}
		}
	}
	return (0);
}
