#include <stdio.h>
#include "lists.h"

/**
 * print_list - Entry point
 *
 * Description: Prints all te elements of a list_t list
 * @h: Pointer to the head of the list
 * Return: The number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		if (h->str != NULL)
			printf("[%d] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");
		n++;
		h = h->next;
	}
	return (n);
}
