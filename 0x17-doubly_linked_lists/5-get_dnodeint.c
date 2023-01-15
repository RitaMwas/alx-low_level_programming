#include "lists.h"

/**
 * *get_dnodeint_at_index - Entry point
 *
 * Description: Gets the nth node of a dlistint_t linked list
 * @head: head node
 * @index: Index of node in list
 * Return: Pointer to nth node, or NULL if node does not exist
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *ptr = head;
	unsigned int counter = 0;

	while (ptr != NULL)
	{
		if (counter == index)
		{
			return (ptr);
		}
		else
		{
			ptr = ptr->next;
			counter++;
		}
	}
	return (NULL);
}
