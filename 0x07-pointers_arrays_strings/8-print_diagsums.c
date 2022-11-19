#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Entry point
 *
 * Description: Prints sum of two diagonals of a
 * square matrix of integers
 * @a: pointer to the array
 * @size: size of array
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int row;
	int diag1 = 0;
	int diag2 = 0;

	for (row = 0; row < size; row++)
	{
		diag1 += a[(size * row) + row];
		diag2 += a[(size * (row + 1)) - (row + 1)];
	}
	printf("%d, %d\n", diag1, diag2);
}
