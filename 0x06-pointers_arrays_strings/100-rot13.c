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
	int i, j;
	char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char lookupTable[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != 0; i++)
	{
		for (j = 0; alphabet[j] != 0; j++)
		{
			if (s[i] == aplhabet[j])
			{
				s[i] = lookupTable[j];
				break;
			}
		}
	}
	return (s);
}
