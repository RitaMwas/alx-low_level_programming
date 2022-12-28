#include "variadic_functions.h"

/**
 * sum_them_all - Entry point
 *
 * Description: Sum of all its parameters
 * @n: Number of arguments passed
 * Return: Returns the sum of all integers
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list numbers_list;
	unsigned int i;
	int sum = 0;

	if (n == 0)
		return (0);

	va_start(numbers_list, n);

	for (i = 0; i < n; i++)
		sum += va_arg(numbers_list, int);

	va_end(numbers_list);

	return (sum);
}
