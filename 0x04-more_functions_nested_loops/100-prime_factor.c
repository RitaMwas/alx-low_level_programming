#include <stdio.h>
#include <math.h>

/**
 * main - Entry point
 *
 * Description: Prints the largest prime factor of the number 612852475143
 *
 * Return: Always 0
 */
int main(void)
{
	int x;
	long num = 612852475143;

	for (x = (int) sqrt(num); x > 2; x++)
	{
		if (num % x == 0)
		{
			printf("%d\n", x);
			break;
		}
	}
	return (0);
}
