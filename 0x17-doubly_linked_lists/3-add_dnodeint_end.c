#include "lists.h"

/**
 * add_dnodeint_end - A function that adds a new node
 *            at the end of a distint_t list.
 * @head: A pointer to the head of a dlistint_t list.
 * @n: An integer value.
 *
 * Return: # The address of the new element, (on Success).
 *         # NULL if it failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *tmp;

	tmp = NULL;
	new = malloc(sizeof(dlistint_t));
	if (!new || !head)
	{
		return (NULL);
	}

	new->n = n;
	new->next = NULL;

	if (!(*head))
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}
	else
	{
		tmp = *head;
		while (tmp->next)
			tmp = tmp->next;
	}
	tmp->next = new;
	new->prev = tmp;
	return (new);
}
