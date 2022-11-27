#include "main.h"
#include <ctype.h>

/**
 * _islower - Entry point
 *
 * Description: A function that checks for lowercase characters
 * @c: character to check
 * Return: Always 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
