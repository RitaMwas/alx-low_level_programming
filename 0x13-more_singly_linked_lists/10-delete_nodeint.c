#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes a node at the specified index
 * @head: The start of the list
 * @index: The index to delete
 * Return: 1 if succesful and -1 otherwise
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp = *head;
	int ret = FAIL;

	if (head && *head)
	{
		if (index > 0)
		{
			ret = delete_nodeint_at_index(&tmp->next, index - 1);
			return (ret);
		}
		else
		{
			tmp = tmp->next;
			free(*head);
			*head = tmp;
			return (PASS);
		}
	}
	return (ret);
}
