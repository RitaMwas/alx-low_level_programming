#include "lists.h"

/**
 * sum_listint - Returns the sum of all the data in the nodes
 * @head: The start of the list
 * Return: The sum of all the integers
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (sum);

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
