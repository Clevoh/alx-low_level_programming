#include "list.h"
/**
 * print_list - print all elements in a singly linked list
 * @h: singly linked list
 * Return: total number of nodes in the list
 */
size_t print_list(const list_t *h)
{
	int b;

	if (h == NULL)
		return (0);

	for (b = 1; h->next != NULL; b++)
	{
		if (h->str == NULL)
			printf("[%u] %s\n", h->len, "(nil)");
		else
		{
			printf("[%u] %s\n" h->len, h->str);
		}
		h = h->next;
	}
	printf("[%u] %s\n", h->len, "(nil)");
	return (b);
}
