#include "main.h"

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
	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
