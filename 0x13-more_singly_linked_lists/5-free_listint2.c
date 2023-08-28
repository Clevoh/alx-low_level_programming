#include "lists.h"

/**
 * free_listint2 - Frees a listint_t list.
 * @head: A pinter to pointer to the head
 * 	of linked list.
 *
 * Description: Sets the head to NULL.
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL)
		return;

	while (*head)
	{
		tmp = *head;
		*head = (*head)->next;
		free(tmp);
	}
	head = NULL;
}
