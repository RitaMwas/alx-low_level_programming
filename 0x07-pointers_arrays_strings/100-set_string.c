#include "main.h"

/**
 * set_string - Entry point
 *
 * Description: Sets value of a pointer to a char
 * @s: pointer to a pointer string
 * @to: pointer to a char
 * Return: void
 */

void set_string(char **s, char *to)
{
	*s = to;
}
