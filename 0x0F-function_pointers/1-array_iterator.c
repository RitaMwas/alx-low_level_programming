#include "function_pointers.h"

/**
 * array_iterator - Entry point
 *
 * Description: Executes function given as a parameter
 * to each element of array
 * @array: The array the function whose elements are to be executed
 * @size: The size of the array
 * @action: The function to be executed on the array elements
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (size <= 0)
		return;
	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
