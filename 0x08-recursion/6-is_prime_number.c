#include "main.h"

/**
 * prime_num - checking for a prime number
 * @n: number
 * @i: number
 * Return: Always 0
 */

int prime_num(int n, int i)
{
	if (i == 1)
	{
		return (1);
	}
	else if (n % i == 0)
	{
		return (0);
	}
	else
	{
		return (prime_num(n, i - 1));
	}
}

/**
 * is_prime_number - return 1 if the input integer
 * is a prime numer
 * @n: number
 * Return: Always 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (prime_num(n, n - 1));
}
