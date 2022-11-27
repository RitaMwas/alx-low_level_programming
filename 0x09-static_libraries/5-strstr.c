#include "main.h"

/**
 * _strstr - Entry point
 *
 * Description: Locates a substring
 * @haystack: string to be searched in
 * @needle: located substring
 * Return: pointer to the beginning of needle or NULL if not found
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j;

	if (needle[0] == 0)
		return (haystack);

	for (i = 0; haystack[i] != 0; i++)
	{
		for (j = 0; needle[j] != 0; j++)
		{
			if (haystack[i + j] != needle[j])
			{
				break;
			}
			if (needle[j + 1] == 0)
			{
				return (haystack + i);
			}
		}
	}
	return (0);
}
