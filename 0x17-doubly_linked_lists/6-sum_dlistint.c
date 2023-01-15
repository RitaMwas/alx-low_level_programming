#include "lists.h"

/**
 * sum_dlistint - Entry point
 *
 * Description: sum of all the data (n) of a dlistint_t linked list
 * @head: head node
 * Return: Sum of all data, or 0 if list is empty
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *ptr = head;

	while (ptr != NULL)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}
	return (sum);
}
