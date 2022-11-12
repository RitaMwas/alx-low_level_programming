#include "main.h"

/**
 * rot13 - Entry point
 *
 * Description: Encodes a string using rot13
 * @s: String to be encoded
 * Return: A pointer to the encoded string
 */

char *rot13(char *s)
{
	int n, m;
	char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char lookupTable[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (n = 0; s[n] != 0; n++)
	{
		for (m = 0; alphabet[m] != 0; m++)
		{
			if (s[n] == aplhabet[m])
			{
				s[n] = lookupTable[m];
				break;
			}
		}
	}
	return (s);
}
