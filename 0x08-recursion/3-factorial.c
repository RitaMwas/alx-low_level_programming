#include "main.h"

/**
 * factorial - Entry point
 *
 * Description: Returns the factorial of a given number
 * @n: Given number
 * Return: An integer
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n <= 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
