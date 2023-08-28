#include "lists.h"

/**
 * add_nodeint - adds node at the beginning of list
 * @head: pointer to the head of the list
 * @n: data to add to the list.
 * Return: address to the newly added node,NULL if fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;

	return (*head);
}
