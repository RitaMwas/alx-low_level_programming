#include "main.h"

/**
 * _strpn - Entry point
 *
 * Description: Gets the length of a prefix substring
 * @s: Pointer to a string
 * @accept: Substring to be used
 * Return: Number of bytes in segment of s
 */

unsigned int _strpn(char *s, char *accept)
{
	int i, j;
	unsigned int n = 0;

	if (s == 0 || accept == 0)
		return (n);

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				n++;
				break;
			}
			if (accept[j + 1] == '\0' && s[i] != accept[j])
				return (n);
		}
	}
	return (n);
}
