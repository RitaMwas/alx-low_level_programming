#include "main.h"

/**
 * swap_int - Entry point
 *
 * Description: Swaps the value of two integers
 * @a: Integer one
 * @b: Integer two
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}
