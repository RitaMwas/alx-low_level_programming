#include "function_pointers.h"

/**
 * int_index - Entry point
 *
 * Description: Searches for an integer in a given array
 * @array: The array to be searched
 * @size: The size of the array
 * @cmp: The compare function to be used
 * Return: Index of first element that matches integer
 * being searched for else -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i, ret;

	if (size <= 0)
		return (-1);
	if (array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		ret = cmp(array[i]);
		if (ret != 0)
			return (i);
	}
	return (-1);
}
