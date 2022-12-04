#include "main.h"

/**
 * _strlen_recursion - Entry point
 *
 * Description: Returns the length of a string
 * @s: Pointer to a string
 * Return: Length of a string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	s++;
	return (_strlen_recursion(s) + 1);
}
