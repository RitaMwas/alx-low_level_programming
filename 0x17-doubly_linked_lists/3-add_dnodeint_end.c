#include "lists.h"

/**
 * *add_dnodeint_end - Entry point
 *
 * Description: Adds a new node at the end of a dlistint_t list
 * @head: head node
 * @n: integer to add to the new node
 * Return:  the address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *ptr;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);

	/* Create new node */
	new_node->prev = NULL;
	new_node->n = n;
	new_node->next = NULL;

	/* Incase the provided list is empty */
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	/* Traverse the list */
	ptr = *head;
	while (ptr->next != NULL)
		ptr = ptr->next;

	/* Add node */
	ptr->next = new_node;
	new_node->prev = ptr;

	return (new_node);
}
