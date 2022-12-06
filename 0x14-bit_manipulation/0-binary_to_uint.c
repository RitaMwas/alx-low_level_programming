#include "main.h"

/**
 * binary_to_uint - converts binary number to a unsigned int
 * @b: string to be converted
 * Return: The converted number, or 0 if there is one or more chars in
 * the string b that is not 0 or 1, b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int slen, result, base2;
	int i;

	if (b == NULL)
		return (0);

	slen = 0;
	while (b[slen])
	{
		if (b[slen] < '0' || b[slen] > '1')
		{
			return (0);
		}
		slen++;
	}

	base2 = 1;
	result = 0;
	i = slen - 1;
	while (i >= 0)
	{
		if (b[i] == '1')
		{
			result += base2;
		}
		base2 *= 2;
		i--;
	}
	return (result);
}
