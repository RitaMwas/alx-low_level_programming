#include "main.h"

/**
 * print_last_digit - Entry point
 *
 * Description: Print last digit of a number
 * @j: Integer to be checked
 * Return: Always 0
 */
int print_last_digit(int j)
{
	int n;

	n = j % 10;

	if (n < 0)
	{
		n *= -1;
	}
	_putchar(n + '0');
	return (n);
}
