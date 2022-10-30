#include "main.h"
#include <stdi0.h>

/**
 * main - Entry point
 * Description: Prints a Fizz Buzz program
 *
 * Return: Always 0
 */
int main(void)
{
	int i;

	for (i = 1; 1 <= 100; i++)
	{
		if (i <= 100 && n != 1)
			printf(" ");
		if (i % 15 == 0)
		{
			printf("FizzBuzz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else if (i % 3 == 0)
		{
			printf("Fuzz");
		}
		else
		{
			printf("%d", i);
		}
	}
	printf("\n");
	return (0);
}
