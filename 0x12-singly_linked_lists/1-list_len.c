#include "lists.h"

/**
 * list_len - Entry point
 *
 * Description: Number of elements in a list
 * @h: Pointer to the head of list
 * Return: Number of element
 */

size_t list_len(const list_t *h)
{
	size_t a = 0;
	const list_t *ptr = NULL;

	if (h == NULL)
		return (0);

	ptr = h;
	while (ptr != NULL)
	{
		a++;
		ptr = ptr->next;
	}
	return (a);
}
