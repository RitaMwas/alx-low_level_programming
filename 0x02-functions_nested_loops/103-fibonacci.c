#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Fibonacci sequence generated
 *
 * Return: Always 0
 */
int main(void)
{
	int i;
	unsigned long int n, m, next, sum;

	n = 1;
	m = 2;
	sum = 0;

	for (i = 1; i <= 33; ++i)
	{
		if (n < 4000000 && (n % 2) == 0)
		{
			sum = sum + n;
		}
		next = n + m;
		n = m;
		m = next;
	}
	printf("%lu\n", sum);

	return (0);
}
