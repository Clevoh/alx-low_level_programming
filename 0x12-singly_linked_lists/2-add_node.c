#include "lists.h"
/**
 * add_node - adds a new node at brginning of list.
 * @head: pointer to the first node of the list.
 * @str: string to store in the list.
 * Return: address of the head or NULL if failed.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	size_t nchar;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);

	for (nchar = 0; str[nchar]; nchar++);

	new->len = nchar;
	new->next = *head;
	*head = new;

	return (*head);
}
