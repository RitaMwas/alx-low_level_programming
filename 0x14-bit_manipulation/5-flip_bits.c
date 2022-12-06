#include "main.h"

/**
 * flip_bits - Entry point
 *
 * Description: Gets the number of bits to be flipped to convert n to m
 * @n: Number one
 * @m: Number two
 * Return: The number of bits to be flipped to make n into m
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int bit_num;

	for (bit_num = 0; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
			bit_num++;
	}
	return (bit_num);
}
