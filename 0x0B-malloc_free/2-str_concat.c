#include "main.h"

/**
 * *str_concat - Entry point
 *
 * Description: Concatenates two strings.
 * @s1: Pointer to first string.
 * @s2: Pointer to second string.
 * Return: Pointer to new memory of concatenated strings
 * NULL on failure.
 */

char *str_concat(char *s1, char *s2)
{
	char *arr;
	unsigned int i, j, size = 0;

	for (i = 0; s1 && (*(s1 + i)); i++, size++)
		;
	for (i = 0; s2 && (*(s2 + i)); i++, size++)
		;

	arr = (char *)malloc(sizeof(char) * size + 1);
	if (arr == NULL)
		return (NULL);

	for (i = 0; s1 && (*(s1 + i)); i++)
		*(arr + i) = *(s1 + i);

	for (j = 0; s2 && (*(s2 + j)); j++, i++)
		*(arr + i) = *(s2 + j);

	*(arr + i) = '\0';

	return (arr);
}
