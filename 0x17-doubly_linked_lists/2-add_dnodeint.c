#include "lists.h"

/**
 * *add_dnodeint - Entry point
 *
 * Description: Adds a new node at the beginning of a dlistint_t list
 * @head: head node
 * @n: data to be added
 * Return: The address of the new element, or NULL if failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	/* Create new node */
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;

	/* In case head is an empty list */
	if (*head == NULL)
	{
		*head = new_node;
		return (*head);
	}

	/* If head is not an empty list */
	else
	{
		new_node->next = *head;
		(*head)->prev = new_node;
		*head = new_node;
	}

	return (new_node);
}
