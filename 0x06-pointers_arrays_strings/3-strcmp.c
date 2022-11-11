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
	int i = 0;

	for (; s1[i] != 0 && s2[i] != 0; i++)
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);

	return (0);
}
