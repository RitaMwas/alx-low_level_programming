#include "main.h"
/**
 * *_strdup - Entry point
 *
 * Description: Allocates space in memory,
 *fills with the copy of a given string
 * @str: pointer to string to be copied to new memory location.
 * Return: pointer of an array of chars
 */

char *_strdup(char *str)
{
	unsigned int i, j;
	char *new_loc;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		;
	new_loc = (char *)malloc(sizeof(char) * (i + 1));

	if (new_loc == NULL)
		return (NULL);

	for (j = 0; j <= i; j++)
		new_loc[j] = str[j];

	return (new_loc);
}
