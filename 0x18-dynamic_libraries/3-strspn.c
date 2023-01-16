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
	int m, n;
	int count = 0;

	for (m = 0; s[m] != 0; m++)
	{
		for (n = 0; accept[n] != 0; n++)
		{
			if (accept[n] == s[m])
			{
				count++;
				break;
			}
		}
		if (accept[n] == 0)
		{
			break;
		}
	}
	return (count);
}
