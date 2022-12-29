#include "lists.h"

/**
 * pop_listint - Deletes the head node
 * @head: The beggining of the list
 * Return: The n value of the deleted node
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (*head == NULL)
		return (0);

	temp = *head;
	n = temp->n;
	*head = temp->next;
	free(temp);

	return (n);
}
