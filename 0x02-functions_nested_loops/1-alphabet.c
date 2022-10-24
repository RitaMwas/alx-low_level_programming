#include "main.h"

/**
 * main - Entry point
 *
 * Description: Print alphabets in lowercase using _putchar
 *
 * Return: Always 0
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);
	_putchar('\n');

	return (0);
}
