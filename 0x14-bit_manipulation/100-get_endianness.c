#include "main.h"

/**
 * get_endianness - Entry point
 *
 * Description: checks the endianness
 * Return: 1 if little endian, 0 otherwise
 */

int get_endianness(void)
{
	unsigned int n;
	char *c;

	n = 1;
	c = (char *) &n;

	return ((int)*c);
}
