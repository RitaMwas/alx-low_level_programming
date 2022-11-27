#include "main.h"

/**
 * _abs - Entry point
 *
 * Description: Compute the absolute value of an integer
 * @j: Integer input
 * Return: Always 0
 */

int _abs(int j)
{
	if (j >= 0)
		return (j);

	{
		j *= -1;
		return (j);
	}
}
