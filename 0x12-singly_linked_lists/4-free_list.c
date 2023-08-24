#include "lists.h"

/**
 * free_list - frees a linked list
 * @head: head of the linked list.
 */

void free_list(list_t *head)
{
	list_t *current;

	while ((current = head) != NULL)
	{
		head = head->next;
		free(current->str);
		free(current);
	}
}
