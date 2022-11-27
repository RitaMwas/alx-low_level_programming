#include "main.h"

/**
 * _isupper - Entry point
 *
 * Description: Checks for uppercase character
 * @c: character to be checked
 *
 * Return: return 1 if c is uppercase otherwise return 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
