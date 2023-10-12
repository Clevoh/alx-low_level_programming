#include "lists.h"

/**
 * free_dlistint - function that frees a dbly,
 * linked list.
 * @head: pointer to head of list.
 *
 * Return: No return.
 */

void free_dlistint(dlistint_t *head)
{
	/* check if head is NULL, if NULL return */
	while (head != NULL)
	{
		dlistint_t *next = head->next;

		free(head);

		head = next;
	}
}
