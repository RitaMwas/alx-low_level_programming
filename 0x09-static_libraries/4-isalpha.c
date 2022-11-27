#include "main.h"
#include <ctype.h>

/**
 * _isalpha - Entry point
 *
 * Description: A function that checks for alphabetic characters
 * @c: Character to be checked
 *
 * Return: Always 0
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
