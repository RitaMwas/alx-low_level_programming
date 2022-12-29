#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes a node at the specified index
 * @head: The start of the list
 * @index: The index to delete
 * Return: 1 if succesful and -1 otherwise
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current;
	listint_t *previous;

	current = *head;
	previous = *head;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = current->next;
		free(current);
		return (1);
	}

	while (index != 0)
	{
		previous = current;
		current = current->next;
		index--;
	}
	previous->next = current->next;
	free(current);

	return (1);
}
