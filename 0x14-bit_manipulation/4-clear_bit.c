#include "main.h"

/**
 * clear_bit - Entry point
 *
 * Description: Sets the bit at a specified index to 0
 * @n: pointer of an unsigned long int
 * @index: index of the bit
 * Return: 1 if successfully cleared, -1 otherwise
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int j;

	if (index > 63)
	{
		return (-1);
	}

	j = 1 << index;

	if (*n & j)
		*n ^= j;
	return (1);
}
