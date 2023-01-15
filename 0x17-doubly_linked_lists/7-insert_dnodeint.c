#include "lists.h"

/**
 * *insert_dnodeint_at_index - Entry point
 *
 * Description: inserts a new node at a given position
 * @h: Address of the head of the list
 * @idx: The index at which the node is to be added
 * @n: The data to be conatined in the new node
 * Return: Address of the new node or NULL if it fails
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *before, *after;

	/* Create the new node */
	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;

	before = *h;
	/* If the trageted node is the first node */
	if (idx == 0)
		return (add_dnodeint(h, n));

	/* Loop to the specified index */
	while (idx > 1 && before)
	{
		before = before->next;
		idx--;
	}
	if (before == NULL && idx != 0)
		return (NULL);

	/* If the specified index happens to be the last node in the list */
	if (before->next == NULL)
		return (add_dnodeint_end(h, n));

	/* If the specified node is in between 2 nodes */
	after = before->next;
	before->next = new_node;
	after->prev = new_node;
	new_node->prev = before;
	new_node->next = after;

	return (new_node);
}
