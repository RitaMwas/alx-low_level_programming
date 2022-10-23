#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Print alphabets except e and q using putchar
 *
 * Return: Always 0
 */
int main(void)
{
	char ch = 'a';

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'e' && ch != 'q')
			putchar(ch);
	}
	putchar('\n');
	return (0);
}
