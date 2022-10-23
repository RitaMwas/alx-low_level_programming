#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Use putchar to print lowercase alphabets
 *
 * Return: Always 0
 */
int main(void)
{
	char ch = 'a';

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	putchar('\n');

	return (0);
}
