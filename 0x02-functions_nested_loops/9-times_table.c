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

	for (a = 0; a <= 9; a++)
	{
		_putchar(48);
		_putchar(44);
		_putchar(39);
		for (r = 1; r <= 9; r++)
		{
			j = (a * r);
			if ((j / 10) > 48)
			{
				_putchar ((j / 10) + 48);
			}
			else
			{
				_putchar(39);
			}
			_putchar((j % 10) + 48);

			if (r  < 9)
			{
				_putchar(44);
				_putchar(39);
			}
		}
		_putchar('\n');
	}
}
