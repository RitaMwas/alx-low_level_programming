#include "main.h"

/**
 * print_numbers - Entry point
 *
 * Description: Prints the numbers, from 0 to 9, followed by a new line
 *
 */

void print_numbers(void)
{
	int a;

	for (a = 48; a <= 57; a++)
	{
		_putchar(a);
	}

	_putchar(10);
}
