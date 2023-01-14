#include "lists.h"

/**
 * free_dlistint - Entry point
 *
 * Description: Frees a dlistint_t list
 * @head: The head pointer of the list
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *ptr;

	while (head != NULL)
	{
		ptr = head;
		head = head->next;
		free(ptr);
	}
}
