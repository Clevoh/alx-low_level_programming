#include "lists.h"

/**
 * get_dnodeint_at_index - function that gets nth node of a list at index
 * @head: pointer to head of list.
 * @index: position of node starting from 0.
 *
 * If the node does not exist, return NULL.
 *
 * Return: the nth node of a dlistint_t linked list.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	i = 0;

	/* check if head is NULL */
	if (!head)
		return (NULL);

	/* while head is not NULL */
	while (head != NULL)
	{
		if (i == index)
			break;
		i++;
		/* if head is not found,make the head point to the next */
		head = head->next;
	}
	/* return the node */
	return (head);
}
