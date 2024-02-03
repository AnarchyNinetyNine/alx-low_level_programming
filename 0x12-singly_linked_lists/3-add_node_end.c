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
	list_t *new, *tmp;

	tmp = NULL;
	new = malloc(sizeof(list_t));
	if (!new || !head)
	{
		return (NULL);
	}
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
	if (str)
	{
		new->str = strdup(str);
		if (new->str == NULL)
		{
			free(new);
			return (NULL);
		}
		new->len = strlen(str);
	}
	else
	{
		new->str = NULL;
		new->len = 0;
	}
	new->next = NULL;
	return (new);
}
