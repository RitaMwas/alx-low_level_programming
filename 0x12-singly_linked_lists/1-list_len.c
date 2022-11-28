#include "lists.h"
#include <stdio.h>

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

	while (h != NULL)
	{
		a++;
		h = h->nets
	}
	return (a);
}
