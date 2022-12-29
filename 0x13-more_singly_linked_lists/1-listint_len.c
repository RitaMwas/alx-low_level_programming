#include "lists.h"

/**
 * listint_len - Returns the number of elements of a list
 * @h: The head of the list
 *
 * Return: The number of nodes
 */

size_t listint_len(const listint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
