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
	unsigned int a = 0, b, t = 0;

	while (accept[a])
	{
		b = 0;
		while (s[b] != 32)
		{
			if (accept[a] == s[b])
			{
				t++;
			}
			b++;
		}
		a++;
	}
	return (t);
}
