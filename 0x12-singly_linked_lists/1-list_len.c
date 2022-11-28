#include "lists.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * list_len - Entry point
 *
 * Description: Number of elements in a list
 * @h: Pointer to the head of list
 * Return: Number of element
 */

size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
}
