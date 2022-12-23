#include "main.h"

/**
 * *argstostr - Entry point
 *
 * Description: Concatenates all the arguments of your program
 * @ac: Number of arguments.
 * @av: Pointer to pointer of each argument.
 * Return: Returns a pointer to a new string, NULL if it fails,
 * NULL if ac == 0 or av == NULL.
 */

char *argstostr(int ac, char **av)
{
	int x, y, z = 0, size = 0;
	char *arr;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (x = 0; x < ac; x++, size++)
	{
		for (y = 0; (*(*(av + x) + y)); y++, size++)
			continue;
	}

	arr = (char *)malloc(sizeof(char) * size + 1);

	if (arr == NULL)
		return (NULL);

	for (x = 0; x < ac; x++, z++)
	{
		for (y = 0; (*(*(av + x) + y)); y++, z++)
			*(arr + z) = *(*(av + x) + y);

		*(arr + z) = '\n';
	}
	*(arr + z) = '\0';

	return (arr);
}
