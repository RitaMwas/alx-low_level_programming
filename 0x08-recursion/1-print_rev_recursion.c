#include "main.h"

/**
 * _print_rev_recursion - Entry point
 *
 * Description: Prints a string in reverse recursively
 * @s: Pointer to a string
 * REturn: No value
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
