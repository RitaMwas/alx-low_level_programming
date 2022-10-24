#include "main.h"

/**
 * times_table - Entry point
 *
 * Description: Prints the 9 times table, starting with 0
 *
 * Return: Always 0
 */
void times_table(void)
{
	int a, r, j;

	for (a = 0; a < 10; a++)
	{
		for (r = 0; r < 10; r++)
		{
			j = (a * r);
			if (r == 0)
			{
				_putchar (j + 48);
			}
			if (j < 10 && r != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(j + 48);
			}
			else if (j >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(j / 10 + 48);
				_putchar(j % 10 + 48);
			}
		}
		_putchar('\n');
	}
}
