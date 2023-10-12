#include "lists.h"
#include<stdio.h>

/**
 * print_list-prints the elements in the list
 * @h: pointer to the head of the linked list
 * format: see example
 * Return - all elements in the list
 */
size_t print_dlistint(const dlistint_t *h)
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
		
	
