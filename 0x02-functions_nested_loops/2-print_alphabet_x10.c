#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 *
 * Description: Print the alphabet 10 times in lowercase
 *
 * Return
 */
void print_alphabet_x10(void)
{
	char ch;
	int n = 0;

	while (n < 10)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
		n++;
		_putchar('\n');
	}
}
