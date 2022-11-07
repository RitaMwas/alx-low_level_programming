#include "main.h"

/**
 * _puts - Entry point
 *
 * Description: Prints a string and new line to stdout
 * @str: Pointer to char
 * Return: 0
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
