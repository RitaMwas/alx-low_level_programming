#include "main.h"

/**
 * square_root - calculates square root
 * @a: integer
 * @b: integer
 * Return: input integer
 */

int square_root(int a, int b)
{
	if (b * b > a)
	{
		return (-1);
	}

	if (b * b == a)
	{
		return (b);
	}
	return (square_root(a, b + 1));
}

/**
 * _sqrt_recursion - returns natural square root of a number
 * @n: number to be squared
 * Return: -1 if n does not have a natural square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (square_root(n, 1));
}
