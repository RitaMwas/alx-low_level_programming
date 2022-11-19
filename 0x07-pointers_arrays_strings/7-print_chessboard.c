#include "main.h"

/**
 * print_chessboard - Entry point
 *
 * Description: Prints the chessboard
 * @a: 2D array of 8 rows and columns
 * Return: Always 0
 */

void print_chessboard(char (*a)[8])
{
	int row, column;

	for (row = 0; row < 8; row++)
	{
		for (column = 0; column < 8; column++)
		{
			_putchar(a[row][column]);
		}
		_putchar('\n');
	}
}
