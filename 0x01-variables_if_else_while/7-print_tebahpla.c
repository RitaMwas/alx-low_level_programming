#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Printing alphabets in revers using putchar
 *
 * Return: Always 0
 */
int main(void)
{
	char ch;

	for (ch = 'z'; ch > 'a'; ch--)
		putchar(ch);
	putchar('\n');
	return (0);
}
