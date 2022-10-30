#include "main.h"

/**
 * print_triangle - Entry point
 *
 * Description: Prints a triangle
 * @size: Is the size of the triangle
 * Return: # to print a triangle
 */
void print_triangle(int size)
{
	int x, y;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 0; x < size; x++)
		{
			for (y = 0; y < size; y++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
