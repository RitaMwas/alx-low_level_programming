#include "lists.h"

/**
 * add_node_end - Adds a new node at the end of a new list
 * @head: Address of head
 * @str: Data to be added in new node
 * Return: Address of new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *current  = NULL;
	list_t *temp = malloc(sizeof(list_t));
	int len = 0;

	if (temp == NULL)
		return (NULL);

	while (str[len])
		len++;
	temp->str = strdup(str);
	temp->len = len;
	temp->next = NULL;

	if (*head == NULL)
	{
		*head = temp;
	}
	else
	{
		current = *head;

		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = temp;
	}
	return (temp);
}
