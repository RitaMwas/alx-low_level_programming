#include "main.h"

/**
 * cap_string - Entry point
 *
 * Description: Capitalizes all words of a string
 * @s: string to capitalize
 * Return: Capitalized string
 */

char *cap_string(char *s)
{
	int i;

	if (s[0] >= 'a' && s[0] <= 'z')
	{
		s[0] -= 32;
	}
	for (i = 1; s[i]; i++)
	{
		if ((s[i - 1] == ' ' || s[i - 1] == '\n' || s[i - 1] == '\t'
					|| s[i - 1] == ',' || s[i - 1] == ';' || s[i - 1] == '!'
					|| s[i - 1] == '?' || s[i - 1] == '"' || s[i - 1] == '('
					|| s[i - 1] == ')' || s[i - 1] == '{' || s[i - 1] == '}'
					|| s[i - 1] == '.') && (s[i] > 'a' && s[i] < 'z'))
		{
			s[i] -= 32;
		}
	}
	return (s);
}
