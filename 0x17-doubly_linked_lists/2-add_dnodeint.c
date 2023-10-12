#include "lists.h"

/**
 * add_dnodeint - adds new node at begininning of a double
 * linked list.
 * @head: pointer to pointer to head of list.
 * @n: data to be added.
 *
 * Return: the address of the new element, or NULL if it failed.
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	/* allocate memory for new node */
	new_node = malloc(sizeof(dlistint_t));

	/* if it fails return NULL */
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	new_node->next = *head;

	new_node->prev = NULL;

	if ((*head) != NULL)
		(*head)->prev = new_node;

	(*head) = new_node;

	return (new_node);
}
