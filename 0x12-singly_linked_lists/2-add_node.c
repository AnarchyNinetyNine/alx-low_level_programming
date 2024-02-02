#include "lists.h"

/**
 * add_node - A function that adds a new node
 *            at the beginning of a list_t list.
 * @head: A pointer to the head of a list_t list.
 * @str: The malloced string.
 *
 * Return: # The address of the new element, (on Success).
 *         # NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));

	if (!new)
		return (NULL);
	new->str = strdup(str);
	new->len = strlen(str);
	new->next = *head;
	*head = new;
	return (new);
}
