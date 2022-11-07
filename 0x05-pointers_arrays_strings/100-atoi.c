#include "main.h"

/**
 * _atoi - Entry point
 *
 * Description: Convert a string to an integer
 * @s: String to be converted
 * Return: The integer value of converted string
 */

int _atoi(char *s)
{
	int sign = 1;
	unsigned int num = 0;

	if (*s == '-')
	{
		sign *= -1;
	}
	else if (*s >= '0' && *s <= '9')
	{
		num = (num * 10) + (*s - '0');
	}
	else if (num > 0)
	{
		break;
	}
	while
	{
		(*s++);
	}

	return (num * sign);
}
