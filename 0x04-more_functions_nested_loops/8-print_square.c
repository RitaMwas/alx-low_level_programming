#include "main.h"

/**
 * print_square - Entry point
 *
 * Description: Prints n squares according n number of times
 * @size: Is the size of the square
 * Return: A square #
 */
void print_square(int size)
{
	int j, m;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (j = 0; j < size; j++)
		{
			for (m = 0; m < size; m++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
