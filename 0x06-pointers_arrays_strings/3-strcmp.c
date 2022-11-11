#include "main.h"

/**
 * _strcmp - Entry point
 *
 * Description: Comparing two strings
 * @s1: String one
 * @s2: String two
 * Return: Always 0
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0, ret;

	for (i = 0, s1[i] && s2[i]; i++)
	{
		if (s1[i] == s2[i])
			continue;
		else
			break;
	}

	ret = s1[i] - s2[i];
	return (ret);
}
