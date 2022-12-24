i#include "main.h"

/**
 * main -  Entry point
 *
 * Description: prints multiplication
 * of two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: returns 0
 */

int main(int argc, char *argv[])
{
	int ans;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	ans = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", ans);

	return (0);
}
