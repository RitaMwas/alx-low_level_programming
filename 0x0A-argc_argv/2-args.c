#include "main.h"

/**
 * main - Entry point
 *
 * Description: prints all arguments it received
 * @argc: argument count
 * @argv: argument vector
 * Return: returns 0
 */

int main(int argc, char *argv[])
{
int j;

for (j = 0; j < argc; j++)
	printf("%s\n", argv[j]);

return (0);
}
