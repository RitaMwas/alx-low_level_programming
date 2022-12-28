#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - Performs basic operations
 * @argc: Argument count
 * @argv: Array of Arguments
 *
 * Return: 1
 */

int main(int argc, char *argv[])
{
	int a, b, ans;
	int (*func_ptr)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	func_ptr = get_op_func(argv[2]);
	if (func_ptr == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	ans = func_ptr(a, b);
	printf("%d\n", ans);
	return (0);
}
