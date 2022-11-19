#include "main.h"

/**
 * _strspn - Entry point
 *
 * Description: Gets the length of a prefix substring
 * @s: Pointer to a string
 * @accept: Substring to be used
 * Return: Number of bytes in segment of s
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int bytes = 0;
	int index;

	while (s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
			{
				bytes++;
				break;
			}
			else if (accept[index + 1] == '\0')
				return (bytes);
		}

		s++;
	}

	return (bytes);
}
