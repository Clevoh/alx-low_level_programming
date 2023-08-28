#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all elements in a listint_t list
 * @h: pointer to the head of the linked list
 * format: see example
 * Return: all the elements in the list
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
