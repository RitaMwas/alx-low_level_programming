#include "lists.h"

/**
 * add_nodeint_end - Adds a node to the end of a list
 * @head: Beggining of the list
 * @n: The int to be added to the list
 *
 * Return: The adress of the new element
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *current = NULL;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		current = *head;
		while (current->next != NULL)
		{
			current = current->next;
		}

		current->next = new;
	}
	return (new);
}
