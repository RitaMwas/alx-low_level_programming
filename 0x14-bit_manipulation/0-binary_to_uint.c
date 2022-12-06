#include "main.h"

/**
 * binary_to_uint - converts binary number to a unsigned int
 * @b: string to be converted
 * Return: The converted number, or 0 if there is one or more chars in
 * the string b that is not 0 or 1, b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	int len = 0, i, pos = 0;
	unsigned int  b_ten = 0;

	if (!b)
		return (b_ten);

	while (b[len])
	{
		if (b[len] != '0' && b[len] != '1')
			return (b_ten);
		len++;
	}

	for (i = len - 1; i >= 0; i--, pos++)
		b_ten = b_ten + (b[i] - '0') * (1 << pos);

	return (b_ten);
}
