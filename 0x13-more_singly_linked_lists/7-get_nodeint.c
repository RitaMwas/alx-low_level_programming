#include "lists.h"

/**
 * get_nodeint_at_index - Gets the node at a given index
 * @head: The start of the list
 * @index: The index to  check
 * Return: Node at given index or NULL if it doesn't exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head != NULL)
	{
		if (index == i)
		{
			return (head);
		}
		else
		{
			head = head->next;
			i++;
		}
	}
	return (NULL);
}
