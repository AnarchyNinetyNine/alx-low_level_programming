#include "lists.h"

/**
 * add_node_end - A function that adds a new node
 *            at the end of a list_t list.
 * @head: A pointer to the head of a list_t list.
 * @str: The malloced string.
 *
 * Return: # The address of the new element, (on Success).
 *         # NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));
	list_t *tmp = malloc(sizeof(list_t));

	if (!new || !tmp)
		return (NULL);

	if (!(*head))
	{
		*head = new;
		tmp = *head;
	}
	else
	{
		tmp = *head;
		while (tmp->next)
			tmp = tmp->next;
	}
	tmp->next = new;
	new->str = strdup(str);
	new->len = strlen(str);
	new->next = NULL;
	return (new);
}
