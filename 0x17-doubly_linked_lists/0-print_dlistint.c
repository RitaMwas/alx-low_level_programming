#include "lists.h"

/**
 * print_dlistint - Entry point
 *
 * Description: Prints all the elements of a dlistint_t list
 * @h: head node
 * Return: The number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	int counter = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		counter++;
		h = h->next;
	}
	return (counter);
}
