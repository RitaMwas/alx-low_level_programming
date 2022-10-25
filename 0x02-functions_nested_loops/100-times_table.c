#include "main.h"

/**
 * print_times_table - Entry point
 *
 * Description: Print the n times table, starting with 0
 * @n: Integer input
 *
 * Return:
 */
void print_times_table(int n)
{
	int a, m, j;

	if (n >= 0 && n <= 15)
	{
		for (a = 0; a <= n; a++)
		{
			_putchar('0');
			for (m = 1; m <= n; m++)
			{
				j = a * m;
				_putchar(44);
				_putchar(32);
				if (j <= 9)
				{
					_putchar(32);
					_putchar(32);
					_putchar(j + 48);
				}
				else if (j <= 99)
				{
					_putchar(32);
					_putchar((j / 10) + 48);
					_putchar((j % 10) + 48);
				}
				else
				{
					_putchar(((j / 100) % 10) + 48);
					_putchar(((j / 10) % 10) + 48);
					_putchar((j % 10) + 48);
				}
			}
			_putchar('\n');
		}
	}
}
