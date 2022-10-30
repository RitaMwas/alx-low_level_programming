#include "main.h"

/**
 * print_line - Entry point
 *
 * Description: Prints a straight line
 * @n: The number of lines to draw
 * Return: A straight line
 */
void print_line(int n)
{
	int a;

	for (a = 1; a <= n; a++)
	{
		_putchar('_');
		if (n < 0 && n == 0)
		{
			_putchar('\n');
		}
	}
	_putchar('\n');
}
