#include "main.h"

/**
 * main - Entry point
 *
 * Description: prints the minimum number of coins to make change
 * for an amount of money
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: returns 1 if there is an error; else returns 0
 */

int main(int argc, char *argv[])
{
	int given_coins = 0, i;
	int denoms[] = {25, 10, 5, 2, 1};
	long int change_amount, rem_change;

	if (argc == 1)
	{
		printf("Error\n");
		return (1);
	}

	change_amount = atoi(argv[1]);
	if (change_amount < 0)
	{
		printf("0\n");
		return (0);
	}
	if (argc == 2)
	{
		for (i = 0; i < 5; i++)
		{
			int possible_coins = change_amount / denoms[i];

			given_coins  += possible_coins;
			rem_change = change_amount % denoms[i];
			change_amount = rem_change;
		}
	}

	printf("%d\n", given_coins);
	return (0);
}
