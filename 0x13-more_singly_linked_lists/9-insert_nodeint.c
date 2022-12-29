#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a node at a specified index
 * @head: The start of the list
 * @idx: The index to insert at
 * @n: The interger to insert
 * Return: Address of new node or NULL if it fialed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new;
	listint_t *current;
	unsigned int i = 0;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;
	current = *head;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	while (current != NULL)
	{
		if (i == (idx - 1))
		{
			new->next = current->next;
			current->next  = new;
			return (new);
		}
		else
		{
			current = current->next;
			i++;
		}
	}
	return (NULL);
}
