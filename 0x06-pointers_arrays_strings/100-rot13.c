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
	int i, n = 0;
	char tx[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l',
		'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y',
		'z', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L',
		'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y',
		'Z'};
	char dd[] = {'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y',
		'z', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l',
		'm', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y',
		'Z', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L',
		'M'};

	for (i = 0; s[i] != '\0'; i++)
	{
		for (n = 0; n < 52; n++)
		{
			if (s[i] == tx[n])
			{
				s[i] = dd[n];
				break;
			}
		}
	}
	return (s);
}
