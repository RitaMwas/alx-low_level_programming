#include "main.h"

/**
 * _puts_recursion - Entry point
 *
 * Definition: Prints a string, followed by a new line
 * @s: Pointer to a string
 * Return: No return value
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}

	_putchar(*s);

	s++;

	_puts_recursion(s);
}
