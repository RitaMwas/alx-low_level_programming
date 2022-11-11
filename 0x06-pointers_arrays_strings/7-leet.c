#include "main.h"

/**
 * leet - Entry point
 *
 * Description: Encodes a string into 1337
 * @s: String to be encoded
 *
 * Return: Encoded string
 */

char *leet(char *s)
{
	int m, n;
	char lowerLetter[] = "aeotl";
	char upperLetter[] = "AEOTL";
	char numbers[] = "43071";

	for (m = 0; s[m] != 0; m++)
	{
		for (n = 0; lowerLetter[n] != 0; n++)
		{
			if (s[m] == lowerLetter[n] || s[m] == upperLetter[n])
			{
				s[m] = numbers[n];
			}
		}
	}
	return (s);
}
