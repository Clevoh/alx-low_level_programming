#include "lists.h"
/**
 * print_list - prints the elements of a list_t list.
 * @b: singly linked list.
 * Return: number of elements in the list.
 */

size_t print_list(const list_t *b)
{
	size_t num;

	num = 0;
	while (b != NULL)
	{
		if (b->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n",b->len,b->str);
		b = b->next;
		num++;
	}
	return (num);
}
