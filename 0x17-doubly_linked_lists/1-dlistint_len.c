#include "lists.h"

/**
 * dlistint_len - Entry point
 *
 * Description: Returns the number of elements in a linked dlistint_t list
 * @h: head node
 * Return: The number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	int counter = 0;

	while (h != NULL)
	{
		counter++;
		h = h->next;
	}
	return (counter);
}
