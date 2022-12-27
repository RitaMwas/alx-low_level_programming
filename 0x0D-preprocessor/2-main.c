#include <stdio.h>

/**
 * main - prints name of file it was compiled from
 *
 * Return: 0 if succesful 1 in case of failure
 */

int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
