#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Description: Generates a random password
 *
 * Return: The generated password
 */

int main(void)
{
	int i, sum, n;
	int pass[300];

	sum = 0;

	srand(time(NULL));

	for (i = 0; i < 300; i++)
	{
		pass[i] = rand() % 78;
		sum += (pass[i] + '0');
		putchar(n + '0');
		if ((2772 - sum) - '0' < 78)
		{
			n = 2772 - sum - '0';
			sum += n;
			putchar(n + '0');
			break;
		}
	}
	return (0);
}
