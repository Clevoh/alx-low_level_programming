#include "lists.h"
/**
 * list_len -returns the number of elements in a linked list.
 * @h: singly linked list.
 * Return: number of elements in a linked list.
 */

size_t list_len(const list_t *h)
{
	size_t i;

	i = 0;
	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
