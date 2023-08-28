#include "lists.h"
#include <stdio.h>

/**
 * listint_len - function that returns the number of elements in linked list
 * @h: pointer to head of linked list.
 *
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
