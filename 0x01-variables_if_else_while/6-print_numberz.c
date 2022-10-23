#include <stdio.h>

/**
 * main - Entry point
 *
 * Description - Print using putchar single digit numbers of base 10
 *
 * Return: Always 0
 */
int main(void)
{
	int a;

	for (a = 0; a < 10; a++)
		putchar((a % 10) + '0');
	putchar('\n');
	return (0);
}
