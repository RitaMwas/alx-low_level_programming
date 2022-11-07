#include "main.h"

/**
 * puts_half - Entry point
 *
 * Description: Prints half of a string
 * @str: Pointer to a char
 * Return: void
 */

void puts_half(char *str)
{
	int a;

	for (a = 0; str[a] != 0; a++)
	{
	}
	a++;
	for (a /= 2;  str[a] != 0; a++)
	{
		_putchar(str[a]);
	}
	_putchar('\n');
}
