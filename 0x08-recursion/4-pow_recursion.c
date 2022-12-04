#include "main.h"

/**
 * _pow_recursion - Entry point
 *
 * Description: Returns the value of x raised to the power of y
 * @x: Integer
 * @y: integer
 * Return: -1 if y is less than 0, else 1
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
