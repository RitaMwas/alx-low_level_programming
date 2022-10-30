#include "main.h"

/**
 * print_most_numbers - Entry point
 *
 * Description: Prints the numbers, from 0 to 9
 * Do not print 2 and 4
 * Return: Always 0
 */

void print_most_numbers(void)
{
	int n;

	for (n = 48; n <= 57; n++)
	{
		if (n != 50 && n != 52)
		{
			_putchar(n);
		}
	}
	_putchar('\n');
}
