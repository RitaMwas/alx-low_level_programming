#include "main.h"
#include <stdio.h>

/**
 * puts2 - Entry point
 *
 * Description: Prints every character of a string
 * @str: Pointer to a char
 * Return: void
 */

void puts2(char *str)
{
	int i = 0;
	int len = 0;

	while (str[i++])
		len++;

	for (i = 0; i < len; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
