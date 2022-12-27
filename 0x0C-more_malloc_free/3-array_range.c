#include "main.h"

/**
 * *array_range - Entry point
 *
 * Description: Creates an array of integers
 * @min: Lowest number in the array
 * @max: Highest number in the array
 * Return: Pointer to the array. NULL if min > max, or malloc fails
 */

int *array_range(int min, int max)
{
	int i, len;
	int *arr;

	if (min > max)
		return (NULL);

	len = max - min + 1;

	arr = malloc(sizeof(int) * len);
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		arr[i] = min++;

	return (arr);
}
